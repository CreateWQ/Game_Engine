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

        static Application &Get();

        inline Window &GetWindow() { return *m_Window; }
    private:
        bool OnWindowClose(WindowCloseEvent &e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
        LayerStack m_LayerStack;
    private:
        static Application *s_Instance;
    };

    // To be 
    Application* CreateApplication();

}



