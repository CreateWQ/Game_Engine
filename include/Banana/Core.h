#pragma once 

#ifdef BN_PLATFORM_WINDOWS
    #ifdef BN_BUILD_DLL
        #define BANANA_API __declspec(dllexport)
    #else
        #define BANANA_API __declspec(dllimport)
    #endif
#else
    #error Banana only support Windows!!
#endif