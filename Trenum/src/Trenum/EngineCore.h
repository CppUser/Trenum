#pragma once

#ifdef TM_PLATFORM_WINDOWS
  #ifdef TM_BUILD_DLL
   #define TM_API __declspec(dllexport)
  #else
   #define TM_API __declspec(dllimport)
  #endif
#else
  #error Trenum supports Windows at this time 
#endif