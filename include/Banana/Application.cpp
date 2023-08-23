#include "bnpch.h"
#include "Application.h"

#include "Banana/Log.h"

#include <glad/glad.h>

#include "Input.h"

namespace Banana {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application *Application::s_Instance = nullptr;

    Application::Application() {
        BN_CORE_ASSERT(s_Instance, "Application already exists!");
        s_Instance = this;
        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));

        unsigned int id;
        glGenVertexArrays(1, &id);        
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
            auto[x, y] = Input::GetMousePosition();

            BN_CORE_TRACE("{0}, {1}", x, y);
            
            m_Window->OnUpdate();
        }
    }

    void Application::OnEvent(Event &e) {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));

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
        layer->OnAttach();
    }

    void Application::PushOverlay(Layer *overlay) {
        m_LayerStack.PopOverlay(overlay);
        overlay->OnAttach();
    }

    inline Application &Application::Get() { return *Application::s_Instance; }
}
