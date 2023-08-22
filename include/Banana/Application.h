#pragma once 

#define BN_PLATFORM_WINDOWS
#define BN_BUILD_DLL

#include "Core.h"
#include "Window.h"
#include "LayerStack.h"
#include "Events/Event.h"
#include "Banana/Events/ApplicationEvent.h"

namespace Banana {
    
    class BANANA_API Application {
    public:
        Application(/* args */);
        virtual ~Application();
        
        void Run(); 

        void OnEvent(Event &e);

        void PushLayer(Layer *layer);
        void PushOverlay(Layer *overlay);
    private:
        bool OnWindowClose(WindowCloseEvent &e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
        LayerStack m_LayerStack;
    };

    // To be 
    Application* CreateApplication();

}



