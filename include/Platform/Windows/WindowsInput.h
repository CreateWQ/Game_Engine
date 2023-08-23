#pragma once 

#include "Banana/Input.h"

namespace Banana {

    class WindowsInput : public Input {
    protected:
        virtual bool IsKeyPressedImpl(int keycode) override;

        virtual bool IsMousePressedImpl(int button) override;
        virtual float GetMouseXImpl() override;
        virtual float GetMouseYImpl() override;
        virtual std::pair<float, float> GetMousePositionImpl() override;
    };
}