// Need for Speed: Most Wanted (Black Edition) needs no patch of its code to boot: the XDK it calls is all on the host.
// Its own hooks go here, [[hook]] entries in config/game.toml and X86_FUNC replacements of recompiled functions.
#include <cstring>
#include <string>
#include <unordered_map>
#include <atomic>

#include <SDL3/SDL.h>
#include <imgui.h>

#include "common/aspect.h"
#include "common/options.h"
#include "cpu/x86_ops.h"
#include "kernel/kernel.h"
#include "kernel/memory.h"

namespace game {

// ==============================================================================
// CHEATS & L3 POPUP
// ==============================================================================
std::atomic<bool> g_cheatMenuOpen{false};
std::atomic<bool> g_cheatInfiniteLp{false};
std::atomic<bool> g_cheatCustomAtk{false};
std::atomic<int>  g_cheatAtkValue{5000};

constexpr uint32_t kPlayerLp = 0x0064D8A4;
constexpr uint32_t kPlayerMaxLp = 0x0064D8A8;
constexpr uint32_t kCardTableBase = 0x005E0548;
constexpr uint32_t kCardCountAddr = 0x005DFC60;
constexpr uint32_t kJumpTableBase = 0x005E17A4;

static uint32_t s_origCardTable[1200] = {};
static bool s_cardTableSaved = false;
static int s_appliedAtk = -1;

bool CheatMenuOpen() {
    return g_cheatMenuOpen.load(std::memory_order_relaxed);
}

static uint32_t GetMaxCardId() {
    // 0x005E17A4 é a tabela de ponteiros de funções da engine (index 1175).
    // Jamais podemos acessar ou sobrescrever além de 1174!
    uint32_t limit = (kJumpTableBase - kCardTableBase) / 4;
    if (limit > 0) limit--; // no máximo 1174
    if (mem::IsCommitted(kCardCountAddr)) {
        uint32_t count = kernel::R16(kCardCountAddr);
        if (count > 0 && count < limit) {
            return count;
        }
    }
    return 1100;
}

static bool IsMonsterCard(uint32_t entry) {
    if (entry == 0) return false;
    uint32_t origAtk = (entry >> 9) & 0x1FF;
    if (origAtk == 0) return false;
    uint32_t type = (entry >> 20) & 0x1F;
    uint32_t subType = (entry >> 18) & 0x03;
    uint32_t category = (entry >> 25) & 0x0F;
    return (type < 0x15 && subType == 0 && (category == 5 || category == 6));
}

static void SaveCardTable() {
    if (s_cardTableSaved || !mem::IsCommitted(kCardTableBase)) return;
    uint32_t maxCards = GetMaxCardId();
    for (uint32_t id = 1; id <= maxCards; ++id) {
        s_origCardTable[id] = kernel::R32(kCardTableBase + id * 4);
    }
    s_cardTableSaved = true;
}

static void RestoreCardTable() {
    if (!s_cardTableSaved || !mem::IsCommitted(kCardTableBase)) return;
    uint32_t maxCards = GetMaxCardId();
    for (uint32_t id = 1; id <= maxCards; ++id) {
        if (s_origCardTable[id] != 0 && IsMonsterCard(s_origCardTable[id])) {
            kernel::W32(kCardTableBase + id * 4, s_origCardTable[id]);
        }
    }
    s_appliedAtk = -1;
}

static void ApplyCardAtk(int atk) {
    if (!mem::IsCommitted(kCardTableBase)) return;
    SaveCardTable();
    uint32_t maxCards = GetMaxCardId();
    uint32_t atkUnits = (uint32_t)(atk / 10);
    // O jogo usa 9 bits para ATK / 10 (0..511), máximo 5000 ATK (500 units)
    if (atkUnits > 500) atkUnits = 500;

    for (uint32_t id = 1; id <= maxCards; ++id) {
        uint32_t orig = s_origCardTable[id];
        if (IsMonsterCard(orig)) {
            uint32_t modified = (orig & ~(0x1FFu << 9)) | (atkUnits << 9);
            kernel::W32(kCardTableBase + id * 4, modified);
        }
    }
    s_appliedAtk = atk;
}

void ApplyCheats() {
    // 1. Vida Infinita do Player
    if (g_cheatInfiniteLp.load(std::memory_order_relaxed)) {
        if (mem::IsCommitted(kPlayerLp)) {
            uint32_t lp = kernel::R32(kPlayerLp);
            if (lp > 0 && lp < 8000) {
                kernel::W32(kPlayerLp, 8000);
                kernel::W32(kPlayerMaxLp, 8000);
            }
        }
    }

    // 2. Manipulação de Ataque das Cartas
    if (g_cheatCustomAtk.load(std::memory_order_relaxed)) {
        int targetAtk = g_cheatAtkValue.load(std::memory_order_relaxed);
        if (s_appliedAtk != targetAtk) {
            ApplyCardAtk(targetAtk);
        }
    } else if (s_appliedAtk != -1) {
        RestoreCardTable();
    }
}

void DrawCheatPopup() {
    // Detectar botão L3 do controle
    int count = 0;
    SDL_JoystickID* ids = SDL_GetGamepads(&count);
    if (count > 0 && ids) {
        SDL_Gamepad* pad = SDL_GetGamepadFromID(ids[0]);
        if (pad) {
            static bool s_lastL3 = false;
            bool l3 = SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_LEFT_STICK);
            if (l3 && !s_lastL3) {
                g_cheatMenuOpen.store(!g_cheatMenuOpen.load());
            }
            s_lastL3 = l3;
        }
        SDL_free(ids);
    }

    // Atalho de teclado alternativo (F9 ou C)
    ImGuiIO& io = ImGui::GetIO();
    if (ImGui::IsKeyPressed(ImGuiKey_F9) || ImGui::IsKeyPressed(ImGuiKey_C)) {
        g_cheatMenuOpen.store(!g_cheatMenuOpen.load());
    }

    // Se o menu não estiver aberto, não desenha nada na tela
    if (!g_cheatMenuOpen.load()) {
        return;
    }

    // Modal / Popup de Cheats
    ImGui::SetNextWindowSize(ImVec2(380, 310), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowPos(ImVec2(io.DisplaySize.x * 0.5f - 190, io.DisplaySize.y * 0.5f - 155), ImGuiCond_FirstUseEver);

    bool open = g_cheatMenuOpen.load();
    if (ImGui::Begin("PAINEL DE CHEATS (L3)", &open, ImGuiWindowFlags_NoCollapse)) {
        ImGui::TextColored(ImVec4(1.0f, 0.84f, 0.2f, 1.0f), "YU-GI-OH! THE DAWN OF DESTINY");
        ImGui::Separator();

        // Cheats de Vida (LP)
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(0.4f, 1.0f, 0.4f, 1.0f), "Vida do Jogador (LP):");

        bool infLp = g_cheatInfiniteLp.load();
        if (ImGui::Checkbox("Vida Infinita (Travar em 8000 LP)", &infLp)) {
            g_cheatInfiniteLp.store(infLp);
        }

        if (ImGui::Button("Restaurar para 8000 LP", ImVec2(170, 30))) {
            if (mem::IsCommitted(kPlayerLp)) {
                kernel::W32(kPlayerLp, 8000);
                kernel::W32(kPlayerMaxLp, 8000);
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("Definir 99999 LP", ImVec2(170, 30))) {
            if (mem::IsCommitted(kPlayerLp)) {
                kernel::W32(kPlayerLp, 99999);
                kernel::W32(kPlayerMaxLp, 99999);
            }
        }

        ImGui::Spacing();
        ImGui::Separator();

        // Cheats de Ataque das Cartas
        ImGui::TextColored(ImVec4(1.0f, 0.4f, 0.4f, 1.0f), "Ataque das Cartas (ATK):");
        bool custAtk = g_cheatCustomAtk.load();
        if (ImGui::Checkbox("Modificar Ataque de Todas as Cartas", &custAtk)) {
            g_cheatCustomAtk.store(custAtk);
        }

        if (custAtk) {
            int atkVal = g_cheatAtkValue.load();
            if (ImGui::SliderInt("Valor ATK", &atkVal, 500, 5000, "%d ATK")) {
                g_cheatAtkValue.store(atkVal);
            }
            if (ImGui::Button("3000 ATK (Dragão Branco)", ImVec2(170, 28))) {
                g_cheatAtkValue.store(3000);
            }
            ImGui::SameLine();
            if (ImGui::Button("5000 ATK (Máximo)", ImVec2(170, 28))) {
                g_cheatAtkValue.store(5000);
            }
        }

        ImGui::Spacing();
        ImGui::Separator();

        if (ImGui::Button("Fechar (L3)", ImVec2(-1, 35))) {
            open = false;
        }
    }
    ImGui::End();
    g_cheatMenuOpen.store(open);
}

// The movies' screens skip on A or START: FEAnyMovie (0x116230, the FE's and the story's), InGameAnyMovie (0x131A30)
// and the boot's (0x1311B0: EA logo, PSA, intro, attract; only while its byte at +0x2C allows). SKIP MOVIES has a tick
// (0xC98356BA, sent each frame, the subtitles' clock at 0x10D760) of each screen taken for A: once, as the skip posts
// the movie's end (0xC3960EB9) and a second would end what comes after; a few frames in, as the attract movie skipped
// on its first, with the boot screen's byte forced, hung on its first frame; and on the boot's screen only once its
// byte is set, the logos the game lets play out still play. A screen ends its movie once: a press of the player's
// after the skip (or before it) is taken for a tick, as a second end hung the attract movie on its frame. The screens'
// destructors forget them
constexpr uint32_t kMsgTick = 0xC98356BA, kMsgPadAccept = 0x406415E3, kMsgPadStart = 0xB5AF2461;
constexpr int kSkipTick = 10;
std::unordered_map<uint32_t, int> g_movie_ticks;  // a movie screen's ticks so far, past kSkipTick once skipped

// game thread, a movie screen's NotificationMessage (thiscall: the message, the object and two params)
void SkipMovie(X86Context& ctx, uint32_t allow_flag) {
    uint32_t message = kernel::R32(ctx.esp + 4);
    bool press = message == kMsgPadAccept || message == kMsgPadStart;
    if (!Opt().skip_movies || (!press && message != kMsgTick)) return;
    int& ticks = g_movie_ticks[ctx.ecx];
    if (press) {
        if (ticks > kSkipTick) kernel::W32(ctx.esp + 4, kMsgTick);  // ended already
        else if (!allow_flag || kernel::G<uint8_t>(ctx.ecx + allow_flag)) ticks = kSkipTick + 1;  // the player's ends it
        return;
    }
    if (ticks > kSkipTick || ++ticks < kSkipTick) return;
    if (allow_flag && !kernel::G<uint8_t>(ctx.ecx + allow_flag)) {
        ticks = kSkipTick - 1;  // not yet: the next tick asks again
        return;
    }
    ticks = kSkipTick + 1;
    kernel::W32(ctx.esp + 4, kMsgPadAccept);
}
void ForgetMovie(uint32_t screen) { g_movie_ticks.erase(screen); }

// only English and Indonesian are offered; Indonesian plays the English table, translated (prompts.cpp)
bool LanguageAvailable(const std::string& code) { return code == "int" || code == "ind"; }

// GameFlowManager's state (0x4936B8, written by 0x1C5CD7 and the rest): 3 the front end, 6 racing, loading between
constexpr uint32_t kGameFlowState = 0x4936B8;
constexpr uint32_t kGameFlowRacing = 6;
bool Racing() { return mem::IsCommitted(kGameFlowState) && kernel::R32(kGameFlowState) == kGameFlowRacing; }

}  // namespace game

#if 0
// The drops on the screen in the rain (0x0CC530, a view's "Rain Drop" pass): 20 of them, each a copy of the frame into
// a 32x32 target and a draw back, 40 renderings a frame. SCREEN RAINDROPS off returns at once (cdecl, the view)
X86_EXTERN_FUNC(__imp__sub_000CC530);
X86_FUNC(sub_000CC530) {
    if (game::Opt().rain_drops) return __imp__sub_000CC530(ctx, base);
    ctx.esp += 4;
}

// The falling rain: a view's precipitation ([view + 0x68], 0x0D818A) draws its 350 drops (+0x33D8, the RAINDROP texture
// at +0x3404) in 0x2527A0. FALLING RAIN off returns at once (thiscall, nothing on the stack); the rain's strength
// (+0x290), which wets the road, is still worked out around it
X86_EXTERN_FUNC(__imp__sub_002527A0);
X86_FUNC(sub_002527A0) {
    if (game::Opt().rain) return __imp__sub_002527A0(ctx, base);
    ctx.esp += 4;
}

X86_EXTERN_FUNC(__imp__sub_00116230);
X86_FUNC(sub_00116230) {
    game::SkipMovie(ctx, 0);
    __imp__sub_00116230(ctx, base);
}
X86_EXTERN_FUNC(__imp__sub_00131A30);
X86_FUNC(sub_00131A30) {
    game::SkipMovie(ctx, 0);
    __imp__sub_00131A30(ctx, base);
}
X86_EXTERN_FUNC(__imp__sub_001311B0);
X86_FUNC(sub_001311B0) {
    game::SkipMovie(ctx, 0x2C);
    __imp__sub_001311B0(ctx, base);
}
// their destructors (FEAnyMovie, InGameAnyMovie, the boot's)
X86_EXTERN_FUNC(__imp__sub_0010D6D0);
X86_FUNC(sub_0010D6D0) {
    game::ForgetMovie(ctx.ecx);
    __imp__sub_0010D6D0(ctx, base);
}
X86_EXTERN_FUNC(__imp__sub_0013F6D0);
X86_FUNC(sub_0013F6D0) {
    game::ForgetMovie(ctx.ecx);
    __imp__sub_0013F6D0(ctx, base);
}
X86_EXTERN_FUNC(__imp__sub_0013EEE0);
X86_FUNC(sub_0013EEE0) {
    game::ForgetMovie(ctx.ecx);
    __imp__sub_0013EEE0(ctx, base);
}
#endif

namespace app {

// the console's XC_LANGUAGE the game reads at boot: English, for Indonesian too, which the disc lacks
uint32_t ConsoleLanguage() { return 1; }

}  // namespace app
