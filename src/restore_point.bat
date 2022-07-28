@echo off

powershell.exe -ExecutionPolicy Bypass -NoExit -Command "Checkpoint-Computer -Description "MySv Save Point" -RestorePointType 'MODIFY_SETTINGS'"