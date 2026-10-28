#!/usr/bin/env bash
# ==============================================================================
# Script de Automação e Build - Yu-Gi-Oh! The Dawn of Destiny (Android Nativo)
# ==============================================================================
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "${SCRIPT_DIR}"

export ANDROID_HOME="${ANDROID_HOME:-/home/anthero/Android/Sdk}"
export ANDROID_NDK_HOME="${ANDROID_NDK_HOME:-${ANDROID_HOME}/ndk/26.3.11579264}"
export JAVA_HOME="${JAVA_HOME:-/usr/lib/jvm/java-17-openjdk-amd64}"
export PATH="${JAVA_HOME}/bin:${ANDROID_HOME}/platform-tools:${PATH}"

BUILD_TYPE="release"
DO_CLEAN=false
DO_INSTALL=false

show_help() {
    echo "Uso: $0 [opções] [debug|release]"
    echo ""
    echo "Opções:"
    echo "  debug        Compilar APK em modo Debug"
    echo "  release      Compilar APK em modo Release (padrão)"
    echo "  --clean      Limpar build anterior antes de compilar"
    echo "  --install    Instalar via adb automaticamente após compilar"
    echo "  --help, -h   Mostrar esta ajuda"
}

for arg in "$@"; do
    case "$arg" in
        debug) BUILD_TYPE="debug" ;;
        release) BUILD_TYPE="release" ;;
        --clean) DO_CLEAN=true ;;
        --install) DO_INSTALL=true ;;
        --help|-h) show_help; exit 0 ;;
        *) echo "Opção desconhecida: $arg"; show_help; exit 1 ;;
    esac
done

echo "======================================================================"
echo "  Yu-Gi-Oh! The Dawn of Destiny - Build APK Android ($BUILD_TYPE)"
echo "======================================================================"
echo "ANDROID_HOME: ${ANDROID_HOME}"
echo "NDK:          ${ANDROID_NDK_HOME}"
echo "JAVA_HOME:    ${JAVA_HOME}"
echo "======================================================================"

# 1. Configurar local.properties para o Gradle
cat <<EOF > local.properties
sdk.dir=${ANDROID_HOME}
ndk.dir=${ANDROID_NDK_HOME}
EOF

# 2. Verificar o executável default.xbe
XBE="assets/default.xbe"
if [ ! -f "$XBE" ]; then
    echo ""
    echo "[AVISO] Arquivo $XBE não encontrado na pasta assets/!"
    echo "Coloque o default.xbe original limpo em: ${SCRIPT_DIR}/assets/default.xbe"
    echo ""
fi

# 3. Executar xbe_symbols se existir XBE e não houver [symbols] no game.toml
if [ -f "$XBE" ]; then
    if [ ! -f "config/game.toml" ] || ! grep -q "^\[symbols\]" "config/game.toml" 2>/dev/null; then
        echo "[1/3] Gerando símbolos do XDK com xbe_symbols..."
        ./tools/xbe_symbols "$XBE" sdk/xdk --library YuGiOh.dll --out config/game.toml
    fi

    # 4. Executar xbe_recomp se houver game.toml
    if [ -f "config/game.toml" ]; then
        echo "[2/3] Recompilando x86 para C++ com xbe_recomp..."
        ./tools/xbe_recomp config/game.toml --xdk sdk/xdk
    fi
fi

# 5. Build do APK com Gradle
echo "[3/3] Compilando APK Android com Gradle e NDK ($BUILD_TYPE)..."
chmod +x ./gradlew

if [ "$DO_CLEAN" = true ]; then
    ./gradlew clean
fi

if [ "$BUILD_TYPE" = "release" ]; then
    ./gradlew assembleRelease
    APK_PATH="app/build/outputs/apk/release/app-release-unsigned.apk"
    [ ! -f "$APK_PATH" ] && APK_PATH="app/build/outputs/apk/release/app-release.apk"
else
    ./gradlew assembleDebug
    APK_PATH="app/build/outputs/apk/debug/app-debug.apk"
fi

echo ""
echo "======================================================================"
echo "  BUILD CONCLUÍDO COM SUCESSO!"
echo "  APK gerado em: ${APK_PATH}"
echo "======================================================================"

if [ "$DO_INSTALL" = true ]; then
    echo "Instalando no dispositivo via adb..."
    adb install -r "${APK_PATH}"
fi
