#pragma once 

#define BN_ENABLE_ASSERTS

#include "Window.h"

struct GLFWwindow;

namespace Banana {

    class WindowsWindow : public Window {
    public:
        WindowsWindow(const WindowProps &props);
        virtual ~WindowsWindow();

        void OnUpdate() override;

        inline unsigned int GetWidth() const override { return m_Data.Width; }
        inline unsigned int GetHeight() const override { return m_Data.Height; }

        inline void SetEventCallback(const EventCallbackFn& callback) override 
            { m_Data.EventCallback = callback; }
        
        void SetVsync(bool enabled) override;
        bool IsVsync() const override;

    private:
        virtual void Init(const WindowProps &props);
        virtual void Shutdown();
    private:
        GLFWwindow *m_Window;

        struct WindowData {
            std::string Title;
            unsigned int Width, Height;
            bool Vsync;
            
            EventCallbackFn EventCallback;
        };

        WindowData m_Data;
    };
    
}