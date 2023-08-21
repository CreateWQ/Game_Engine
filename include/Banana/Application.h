#pragma once 

#define BN_PLATFORM_WINDOWS
#define BN_BUILD_DLL

#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Banana {
    
    class BANANA_API Application {
    public:
        Application(/* args */);
        virtual ~Application();
        
        void Run(); 
    
    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // To be 
    Application* CreateApplication();

}



