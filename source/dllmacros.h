// Copyright (c) 2023 James Cook

#ifndef MY_DLL_API
	#ifdef _MSC_VER
		//#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
		// Windows Header Files
		//#include <windows.h>
		// windows
		#ifdef MY_EXPORT_DLL
			// compiling a dll (*.dll) in windows
			#define MY_DLL_API __declspec(dllexport)
		#elif MY_IMPORT_DLL
			// use a dll instead of a static library in windows
			#define MY_DLL_API __declspec(dllimport)
		#else
			// compile without dll
			#define MY_DLL_API
		#endif // _DLL
		#define MY_EXTERN
	#else
		// gcc, for use with a dynamic link library
		#define MY_DLL_API
		#define MY_EXTERN extern
	#endif // _MSC_VER
#endif // MY_DLL_API

// MY_DLL_API MY_EXTERN function_prototype_in_header

// MY_DLL_API function_to_be_exported
