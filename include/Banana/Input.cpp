#include "bnpch.h"
#include "Input.h"

namespace Banana {

    inline bool Input::IsKeyPressed(int keycode) { return s_Instance->IsKeyPressedImpl(keycode); } 

    inline bool Input::IsMousePressed(int button) { return s_Instance->IsMousePressedImpl(button); }
    inline float Input::GetMouseX(int button) { return s_Instance->GetMouseXImpl(); }
    inline float Input::GetMouseY(int button) { return s_Instance->GetMouseYImpl(); }
    inline std::pair<float, float> Input::GetMousePosition() { return s_Instance->GetMousePositionImpl(); }

}