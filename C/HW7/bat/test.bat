@echo off  
:loop  
    data.exe>data.in  
    ans.exe<data.in>ans.out
    7_2.exe<data.in>7_2.out  
    fc 7_2.out ans.out  
if not errorlevel 1 goto loop  
pause  
goto loop
