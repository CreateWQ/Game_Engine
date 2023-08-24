#pragma once 

#define BN_PLATFORM_WINDOWS
#define BN_BUILD_DLL

#include "Core.h"

namespace Banana {

    class BANANA_API Input {
    public:
        inline static bool IsKeyPressed(int keycode);

        inline static bool IsMousePressed(int button);
        inline static float GetMouseX(int button);
        inline static float GetMouseY(int button);
        inline static std::pair<float, float> GetMousePosition();

    protected:
        virtual bool IsKeyPressedImpl(int keycode) = 0;
        virtual bool IsMousePressedImpl(int button) = 0;
        virtual float GetMouseXImpl() = 0;
        virtual float GetMouseYImpl() = 0;
        virtual std::pair<float, float> GetMousePositionImpl() = 0;
    private:
        static Input *s_Instance;
    };
}