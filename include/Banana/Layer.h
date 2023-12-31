#pragma once 

#define BN_PLATFORM_WINDOWS
#define BN_BUILD_DLL
#define BN_DEBUG

#include "Core.h"
#include "Events/Event.h"


namespace Banana{

    class BANANA_API Layer {
    public:
        Layer(const std::string &name = "Layer");
        virtual ~Layer() = default;

        virtual void OnAttach() {}
        virtual void OnDetach() {} 
        virtual void OnUpdate() {}
        virtual void OnEvent(Event &event) {}

        inline const std::string &GetName() const { return m_DebugName; }
    protected:
        std::string m_DebugName;
    };
}
