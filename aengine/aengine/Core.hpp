#pragma once

#ifdef AE_EXPORT
	#define AE_API __declspec(dllexport)
#else
	#define AE_API __declspec(dllimport)
#endif