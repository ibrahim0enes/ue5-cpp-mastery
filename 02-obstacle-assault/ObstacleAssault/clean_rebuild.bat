@echo off
title Unreal Engine Proje Temizleme ve Rebuild Araci
color 0B

echo ========================================================
echo Unreal Engine Onbellek Dosyalari Temizleniyor...
echo ========================================================

:: Unreal Editor'un kilitli tutabileceği klasörleri zorla siliyoruz
if exist Binaries (
    echo [1/5] Binaries klasoru siliniyor...
    rmdir /s /q Binaries
)

if exist Intermediate (
    echo [2/5] Intermediate klasoru siliniyor...
    rmdir /s /q Intermediate
)

if exist Saved (
    echo [3/5] Saved klasoru siliniyor...
    rmdir /s /q Saved
)

if exist .vs (
    echo [4/5] .vs (Visual Studio) gizli klasoru siliniyor...
    rmdir /s /q .vs
)

:: Eski .sln (Solution) dosyasını siliyoruz
for %%i in (*.sln) do (
    echo Eski Visual Studio cozumu siliniyor: %%i
    del /f /q "%%i"
)

echo [5/5] Visual Studio proje dosyalari yeniden uretiliyor...
for %%i in (*.uproject) do (
    echo Uproject bulundu: %%i
    :: Unreal Build Tool kullanarak .sln dosyasini sifirdan olusturuyoruz
    "C:\Program Files\Epic Games\UE_5.4\Engine\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.vshost.exe" -projectfiles -project="%~dp0%%i" -progress -sock
)

echo.
echo ========================================================
echo Islem Basariyla Tamamlandi! 
echo Simdi Visual Studio cozumlgunu acip Build/Rebuild yapabilirsin.
echo ========================================================
pause