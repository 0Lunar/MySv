@echo off

title MySv_√1.0.0 Compiler

for /F "tokens=2" %%i in ("date /t") do set mydate=%%i
set mytime=%time%
g++ MySv.cc -o MySv.exe
echo "[%mytime%] File compilato"

pause