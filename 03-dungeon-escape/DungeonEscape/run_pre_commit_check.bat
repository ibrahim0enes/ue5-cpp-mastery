@echo off
setlocal

REM ------------------------------------------------------------------
REM AYARLAR — kendi kurulumuna gore duzenle
REM ------------------------------------------------------------------
set UE_PATH=C:\Program Files\Epic Games\UE_5.4
set PROJECT_PATH=C:\Projects\DungeonEscape\DungeonEscape.uproject
set SCRIPT_PATH=C:\Projects\DungeonEscape\Content\Python\pre_commit_check.py

echo ========================================
echo   Commit Oncesi Kontrol baslatiliyor
echo ========================================
echo.

"%UE_PATH%\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "%PROJECT_PATH%" ^
    -run=pythonscript -script="%SCRIPT_PATH%" ^
    -unattended -nopause -nosplash -nullrhi

if %errorlevel% neq 0 (
    echo.
    echo HATA: Script calisirken bir sorun oldu ^(errorlevel %errorlevel%^)
    pause
    exit /b 1
)

echo.
echo ========================================
echo   Kontrol tamamlandi.
echo   Detayli rapor icin: Saved\PreCommitReports\ klasorune bak.
echo ========================================
pause
