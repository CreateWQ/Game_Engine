#pragma once 

#include "Banana/Layer.h"
#include "Banana/Events/MouseEvent.h"
#include "Banana/Events/KeyEvent.h"
#include "Banana/Events/ApplicationEvent.h"

namespace Banana {
    
    class BANANA_API ImGuiLayer : public Layer {
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach();
        void OnDetach();
        void OnUpdate();
        void OnEvent(Event &event);
    private: 
        bool OnMouseButtonPressedEvent(MouseButtonPressedEvent &e);
        bool OnMouseButtonReleasedEvent(MouseButtonReleasedEvent &e);
        bool OnMouseMovedEvent(MouseMovedEvent &e);
        bool OnMouseScrolled(MouseScrolledEvent &e);  
        bool OnKeyPressedEvent(KeyPressedEvent &e);      
        bool OnKeyReleasedEvent(KeyReleasedEvent &e);
        bool OnKeyTypeEvent(KeyTypedEvent &e);
        bool OnWindowResizeEvent(WindowResizeEvent &e);      

    private:
        float m_Time = 0.0;
    };
}