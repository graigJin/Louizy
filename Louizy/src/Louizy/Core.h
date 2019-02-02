#pragma once

#ifdef LZ_PLATFORM_WINDOWS
	#ifdef LZ_BUILD_DLL
		#define	LOUIZY_API __declspec(dllexport)
	#else
		#define LOUIZY_API __declspec(dllimport)
	#endif
#else
	#error Louizy only supports Windows!
#endif

