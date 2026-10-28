// Need for Speed: Most Wanted (Black Edition) needs no patch of its code to boot: the XDK it calls is all on the host.
// Its own hooks go here, [[hook]] entries in config/game.toml and X86_FUNC replacements of recompiled functions.
#include <cstring>
#include <string>
#include <unordered_map>

#include "common/aspect.h"
#include "common/options.h"
#include "cpu/x86_ops.h"
#include "kernel/kernel.h"
#include "kernel/memory.h"

namespace game {

// The console's widescreen flag (XGetVideoFlags at boot, 0x0D0202, kept at 0x48099C; set from 3:2 on, native/main.cpp)
// gives the cameras (0x0D4888, 0x0D8330) a frame 853 wide (480 * 16 / 9, at 0x427C00) for a 4:3 one's 640. It is the
// frame's own shape here, so 19.5:9 is not 16:9 stretched
constexpr uint32_t kVideoFlags = 0x48099C, kWideWidth = 0x427C00;
void WidenAspect() {
}

void ApplyGraphicsSwitches() {
}

void ApplyCheats() {
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
