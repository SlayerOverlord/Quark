//Declspec Macro File
//Macro for automatic import/export of Quark dll

#pragma once

#ifdef QRK_PLATFORM_WINDOWS						//Checks if the current build of Quark is a windows build
	#ifdef QRK_BUILD_DLL						//Checks if the translation unit is part of the Quark Build DLL
		#define QUARK_API __declspec(dllexport)	//Exports the translation unit as part of the Quark API
	#else
		#define QUARK_API __declspec(dllimport)	//Imports the Quark API into the translation unit
	#endif

#else											//No other platforms are supported, so an error is thrown currently
	#error Quark only supports windows currently!
#endif