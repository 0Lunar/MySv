@echo off

powershell.exe -ExecutionPolicy Bypass -NoExit -Command "Checkpoint-Computer -Description 'MySv_restore_point' -RestorePointType 'MODIFY_SETTINGS'"

pause