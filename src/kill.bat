@echo off

echo "=========================================KILLING UNNECESSARY PROCESS========================================="    
echo.
taskkill /IM teamviewer.exe /F /T 
taskkill /IM TeamViewer.exe /F /T 
taskkill /IM Taskmgr.exe /F /T 
taskkill /IM chrome.exe /F /T
taskkill /IM AnyDesk.exe /F /T
taskkill /IM YourPhone.exe /F /T
taskkill /IM TextInputHost.exe /F /T
taskkill /IM Cortana.exe /F /T
taskkill /IM msedge.exe /F /T
taskkill /IM Firefox.exe /F /T
echo.
echo "[%TIME%]  Done"