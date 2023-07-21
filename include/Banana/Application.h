#pragma once 

#define BN_PLATFORM_WINDOWS
#define BN_BUILD_DLL

#include "Core.h"

namespace Banana {
    
    class BANANA_API Application
    {
    private:
        /* data */
    public:
        Application(/* args */);
        ~Application();
        void Run(); 
    };

    // To be 
    Application* CreateApplication();

}



