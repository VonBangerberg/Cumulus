#pragma once

#ifdef CM_PLATFORM_WINDOWS
	#ifdef CM_BUILD_DLL
		#define CUMULUS_API __declspec(dllexport)
	#else
		#define CUMULUS_API __declspec(dllimport)
	#endif
#endif