@echo off
setlocal enabledelayedexpansion

REM ------------------------------------------------------------------
REM AYARLAR — kendi kurulumuna gore duzenle
REM ------------------------------------------------------------------
set UE_PATH=C:\Program Files\Epic Games\UE_5.6
set PROJECT_DIR=C:\Projects\ObstacleAssault
set PROJECT_NAME=ObstacleAssault
set PROJECT_PATH=%PROJECT_DIR%\%PROJECT_NAME%.uproject

echo ========================================
echo   TEMIZ REBUILD - %PROJECT_NAME%
echo ========================================
echo.
echo Bu script su klasorleri SILECEK:
echo   - %PROJECT_DIR%\Binaries
echo   - %PROJECT_DIR%\Intermediate
echo   - %PROJECT_DIR%\Saved\Cooked
echo   - %PROJECT_DIR%\.vs
echo.
echo Devam etmeden once Unreal Editor ve Visual Studio'nun KAPALI
echo oldugundan emin ol (acik dosyalar silinemez / kilitli kalir).
echo.
set /p CONFIRM="Devam etmek istiyor musun? (E/H): "
if /i not "%CONFIRM%"=="E" (
    echo Iptal edildi.
    pause
    exit /b 0
)

echo.
echo [1/4] Eski derleme dosyalari siliniyor...
if exist "%PROJECT_DIR%\Binaries"       rmdir /s /q "%PROJECT_DIR%\Binaries"
if exist "%PROJECT_DIR%\Intermediate"   rmdir /s /q "%PROJECT_DIR%\Intermediate"
if exist "%PROJECT_DIR%\Saved\Cooked"   rmdir /s /q "%PROJECT_DIR%\Saved\Cooked"
if exist "%PROJECT_DIR%\.vs"            rmdir /s /q "%PROJECT_DIR%\.vs"
echo Temizlik tamamlandi.

echo.
echo [2/4] Proje dosyalari (.sln) yeniden olusturuluyor...
call "%UE_PATH%\Engine\Build\BatchFiles\GenerateProjectFiles.bat" "%PROJECT_PATH%"
if %errorlevel% neq 0 (
    echo.
    echo HATA: Proje dosyalari olusturulamadi. Engine yolunu ^(UE_PATH^) kontrol et.
    pause
    exit /b 1
)
echo Proje dosyalari olusturuldu.

echo.
echo [3/4] Derleme baslatiliyor (Development Editor, Win64)...
call "%UE_PATH%\Engine\Build\BatchFiles\Build.bat" %PROJECT_NAME%Editor Win64 Development -project="%PROJECT_PATH%" -waitmutex
if %errorlevel% neq 0 (
    echo.
    echo ========================================
    echo   DERLEME BASARISIZ
    echo   Yukaridaki hata mesajlarini incele.
    echo   Detayli log: %PROJECT_DIR%\Saved\Logs\
    echo ========================================
    pause
    exit /b 1
)

echo.
echo ========================================
echo   TEMIZ REBUILD TAMAMLANDI — derleme basarili
echo ========================================
pause
