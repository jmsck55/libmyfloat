rem Copyright (c) 2023 James Cook
rem uses cl.exe from https://visualstudio.microsoft.com
rem Compile without dll:
cl libmyfloat.c main.c
main.exe
pause
rem Compile with dll:
cl /LD libmyfloat.c /DMY_EXPORT_DLL
cl /Femain_test.exe main.c /DMY_IMPORT_DLL /link libmyfloat.lib
main_test.exe
pause