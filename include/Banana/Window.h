#pragma once 

#define BN_BUILD_DLL
#define BN_PLATFORM_WINDOWS

#define BN_ENABLE_ASSERTS 

#include "bnpch.h"

#include "Core.h"
#include "Events/Event.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Banana
{
    struct WindowProps
    {
        std::string Title;
        unsigned int Width;
        unsigned int Height;

        WindowProps(const std::string &title = "Banana Engine",
                    unsigned int width = 1280, 
                    unsigned int height = 720) 
            : Title(title), Width(width), Height(height) {}

    };

    // Interface representing a desktop system based Window
    class BANANA_API Window {
    public:
        using  EventCallbackFn = std::function<void(Event&)>;

        virtual ~Window() {}
        
        virtual void OnUpdate() = 0;
        
        virtual unsigned int GetWidth() const = 0;
        virtual unsigned int GetHeight() const = 0;

        virtual void SetEventCallback(const EventCallbackFn &callback) = 0;
        virtual void SetVsync(bool enable) = 0;
        virtual bool IsVsync() const = 0;

        static Window *Create(const WindowProps &props = WindowProps());
    };
    
} // namespace Banana
