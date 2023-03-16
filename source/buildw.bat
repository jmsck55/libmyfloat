rem Copyright (c) 2023 James Cook
rem uses cl.exe from https://visualstudio.microsoft.com
cl /LD libmyfloat.c /DMY_EXPORT_DLL
rem cmake
rem See also: https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170
cl /Femain_test.exe main.c /DMY_IMPORT_DLL
rem main_test.exe
