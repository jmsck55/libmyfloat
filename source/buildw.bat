rem Copyright (c) 2023 James Cook
 
cl /LD libmyfloat.c /DMY_EXPORT_DLL
cl /Femain_test.exe main.c /DMY_IMPORT_DLL
rem main_test.exe
