#include "bnpch.h"
#include "Application.h"

#include "Banana/Events/ApplicationEvent.h"
#include "Banana/Log.h"


namespace Banana {

    Application::Application() {
        m_Window = std::unique_ptr<Window>(Window::Create());
    }

    Application::~Application()
    {
    }

    void Application::Run() {
        

        while (m_Running) {
            m_Window->OnUpdate();

        }
    }

}
