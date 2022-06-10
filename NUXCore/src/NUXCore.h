#pragma once

#ifdef NUX_PLATFORM_WINDOWS
#ifdef NUX_IS_DLL
#define NUX_API __declspec(dllexport)
#else
#define NUX_API __declspec(dllimport)
#endif
#else
#error NUX IS ONLY ON WINDOWS
#endif