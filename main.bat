@echo off

set shortcut="C:\msys64\mingw64.lnk"
set startmenu="%APPDATA%\..\"
copy %shortcut% %startmenu%
echo eshe
set startmenu="%APPDATA%\Microsoft\Windows\Start Menu\Programs"
@echo on
copy %shortcut% %startmenu%
@echo off
echo Готово!
pause
taskkill /F /IM explorer.exe & start explorer.exe
pause
./ext.bat
pause
echo { > "%APPDATA%\Code\User\settings.json"
echo "files.autoSave": "afterDelay", >> "%APPDATA%\Code\User\settings.json"
echo "files.autoSaveDelay": 1000 >> "%APPDATA%\Code\User\settings.json"
echo } >> "%APPDATA%\Code\User\settings.json"
echo Авто-сохранение включено!
