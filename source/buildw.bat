rem Copyright (c) 2023 James Cook
rem uses cl.exe from https://visualstudio.microsoft.com
cl /LD libmyfloat.c /DMY_EXPORT_DLL
cl /Femain_test.exe main.c /DMY_IMPORT_DLL /link libmyfloat.lib
rem main_test.exe
