# Yu-Gi-Oh! The Dawn of Destiny — Android Port

[![Build & Release Android APK](https://github.com/WINDROID-EMU/Yu-Gi-Oh-The-Dawn-of-Destiny/actions/workflows/build.yml/badge.svg)](https://github.com/WINDROID-EMU/Yu-Gi-Oh-The-Dawn-of-Destiny/actions/workflows/build.yml)
[![Platform: Android](https://img.shields.io/badge/Platform-Android%2010%2B-green.svg)](https://android.com)
[![Architecture: arm64-v8a](https://img.shields.io/badge/Architecture-arm64--v8a-blue.svg)]()
[![Renderer: Vulkan](https://img.shields.io/badge/Graphics-Vulkan%201.1-orange.svg)]()
[![Latest Release](https://img.shields.io/github/v/release/WINDROID-EMU/Yu-Gi-Oh-The-Dawn-of-Destiny?include_prereleases&label=Release)](https://github.com/WINDROID-EMU/Yu-Gi-Oh-The-Dawn-of-Destiny/releases/latest)
[![download do jogo] https://4br.me/YUGIOH-XBOX

Port nativo para Android de **Yu-Gi-Oh! The Dawn of Destiny** (lançado originalmente para o Xbox clássico em 2004), baseado em **recompilação estática** de x86 para binário nativo `arm64-v8a`.

---

## 📋 Sobre o Projeto

Diferente de um emulador convencional que interpreta ou recompila código em tempo real (JIT), este projeto utiliza recompilação estática antecipada (AOT) através do **[XboxXBERecomp](https://github.com/WINDROID-EMU/XboxXBERecomp)**:

- **Execução Nativa:** O código do jogo foi convertido para C++ e compilado diretamente para a arquitetura `arm64-v8a` do processador do celular (`libmain.so`), eliminando sobrecargas de emulação e garantindo taxa de quadros consistente com baixo consumo de energia.
- **Renderizador Vulkan 1.1:** Camada Direct3D 8 reimplementada nativamente sobre Vulkan para alta eficiência gráfica em GPUs móveis.
- **Áudio Nativo & SDL3:** DirectSound reimplementado com decodificação direta via SDL 3.4+.
- **Controles Touchscreen & Gamepads:** Overlay de toque configurável na tela e suporte completo a controles físicos via Bluetooth ou USB (Xbox, PlayStation, 8BitDo, etc.).
- **Auto-Update:** Sistema integrado de verificação de atualizações diretamente pelo GitHub Releases.

---

## 📱 Requisitos do Sistema

| Requisito | Mínimo | Recomendado |
| :--- | :--- | :--- |
| **Sistema Operacional** | Android 10.0 (API 29) | Android 12.0+ (API 31+) |
| **Arquitetura** | `arm64-v8a` (64 bits) | `arm64-v8a` |
| **GPU / Driver** | Vulkan 1.1 compatível | Adreno 6xx+, Mali-G7x+, Xclipse |
| **Memória RAM** | 3 GB | 4 GB ou mais |
| **Armazenamento** | 2 GB livres | 3 GB livres |

---

## 🚀 Como Instalar e Jogar

> **Atenção:** Este repositório e o APK gerado **NÃO** incluem arquivos proprietários do jogo original (músicas, texturas, modelos, etc.). Você precisará fornecer os arquivos da sua própria cópia do jogo original.

1. **Baixar o APK:**
   - Acesse a aba de **[Releases](https://github.com/WINDROID-EMU/Yu-Gi-Oh-The-Dawn-of-Destiny/releases)** e baixe o APK mais recente (`Yu-Gi-Oh-The-Dawn-of-Destiny-v*.apk`).
   - Instale o APK no seu aparelho Android.

2. **Preparar os Arquivos do Jogo:**
   - Obtenha a sua cópia original de **Yu-Gi-Oh! The Dawn of Destiny (USA)** (formato `.iso` ou pasta com os arquivos extraídos).
   - No armazenamento interno do celular, crie uma pasta chamada `YuGiOh` (caminho: `/storage/emulated/0/YuGiOh/`) ou utilize o botão de importar no primeiro início do app.
   - Coloque a imagem `.iso` ou a pasta contendo `default.xbe` e suas subpastas (`card`, `duel`, `sound`, etc.) dentro de `YuGiOh/`.

3. **Iniciar o Jogo:**
   - Abra o aplicativo **Yu-Gi-Oh! The Dawn of Destiny**.
   - Conceda a permissão de acesso ao armazenamento quando solicitado.
   - O aplicativo verificará a integridade dos arquivos e iniciará o jogo automaticamente.

---

## 🛠️ Como Compilar Localmente

### Pré-requisitos
- **Linux** (Ubuntu 22.04 / 24.04 recomendado) ou **macOS / Windows (WSL2)**
- **OpenJDK 17** (`java-17-openjdk`)
- **Android SDK** com API 34 (`platforms;android-34`)
- **Android NDK** `26.3.11579264`
- **CMake** `3.31.6`

### Passo a passo:
```bash
# 1. Clone o repositório
git clone https://github.com/WINDROID-EMU/Yu-Gi-Oh-The-Dawn-of-Destiny.git
cd Yu-Gi-Oh-The-Dawn-of-Destiny

# 2. Configure as variáveis de ambiente (ajuste para o seu caminho)
export ANDROID_HOME=$HOME/Android/Sdk
export ANDROID_NDK_HOME=$ANDROID_HOME/ndk/26.3.11579264
export JAVA_HOME=/usr/lib/jvm/java-17-openjdk-amd64

# 3. Compile o APK em modo Release
chmod +x ./gradlew
./gradlew assembleRelease

# O APK gerado estará em:
# app/build/outputs/apk/release/app-release.apk
```

---

## 📁 Estrutura do Código

```
YuGiOh-Android/
├── .github/workflows/       # Workflow do GitHub Actions (Build e Release automática)
├── app/                     # Módulo Android principal (Activity, layouts, assets de UI)
│   ├── src/main/java/       # Classes Java (YuGiOhActivity, UpdateChecker, Storage)
│   └── src/main/assets/     # Texturas do layout touch virtual
├── CMakeLists.txt           # Configuração do build C++ nativo
├── config/                  # Configurações de recompilação (game.toml)
├── generated/game/          # Código C++ retransladado estaticamente da CPU x86
├── native/                  # Host C++ do Android (SDL3, Vulkan, Input, Som)
├── src/                     # Implementações de Direct3D 8, som, hooks e patches
├── tools/                   # Utilitários de extração e recompilação do Xbox
└── build_apk.sh             # Script auxiliar de compilação rápida local
```

---

## 🤖 Integração Contínua (CI/CD)

O repositório conta com um workflow automatizado em `.github/workflows/build.yml` que:
1. Executa a compilação do APK a cada `push` na branch principal (`main` / `master`) ou em tags `v*`.
2. Utiliza o runner oficial Ubuntu com Android NDK e Java 17.
3. Clona automaticamente o runtime portátil de [WINDROID-EMU/XboxXBERecomp](https://github.com/WINDROID-EMU/XboxXBERecomp).
4. Gera o APK assinado e calcula os checksums SHA256.
5. Cria e publica automaticamente uma **Release no GitHub** com o instalador `.apk` pronto para download.

---

## ⚖️ Aviso Legal & Direitos Autorais

- **Yu-Gi-Oh! The Dawn of Destiny** é uma marca registrada de **Konami Digital Entertainment** e **Kazuki Takahashi**.
- Este é um projeto de fã, não-comercial, com propósitos educacionais e de preservação de software.
- Nenhum código binário proprietário protegido por direitos autorais, imagem de disco, BIOS ou asset multimídia é distribuído neste repositório.
