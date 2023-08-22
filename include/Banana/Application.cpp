#include "bnpch.h"
#include "Application.h"

#include "Banana/Log.h"

#include <GLFW/glfw3.h>


namespace Banana {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application::Application() {
        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
    }

    Application::~Application()
    {
    }

    void Application::Run() {
        

        while (m_Running) {
            glClearColor(0.5, 0.5, 0, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            
            for (Layer *layer : m_LayerStack) 
                layer->OnUpdate();
            
            m_Window->OnUpdate();
        }
    }

    void Application::OnEvent(Event &e) {
        EventDispatcher dispatcher(e);
        dispatcher.Dispath<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));

        BN_CORE_TRACE("{0}", e);

        for (auto it = m_LayerStack.end(); it != m_LayerStack.begin(); ) {
            (*--it)->OnEvent(e);
            if (e.GetHandled())
                break;
        }
    }

    bool Application::OnWindowClose(WindowCloseEvent &e) {
        m_Running = false;
        return true;
    }

    void Application::PushLayer(Layer *layer) {
        m_LayerStack.PushLayer(layer);
    }

    void Application::PushOverlay(Layer *overlay) {
        m_LayerStack.PopOverlay(overlay);
    }
}
