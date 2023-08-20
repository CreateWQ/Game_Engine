#pragma once 

#define BN_PLATFORM_WINDOWS
#define BN_BUILD_DLL

#include <spdlog/spdlog.h>
#include <memory>
#include "Banana/Core.h"


namespace Banana
{
    class BANANA_API Log
    {
    public:
        static void Init();

        static std::shared_ptr<spdlog::logger> &GetCoreLogger();
        static std::shared_ptr<spdlog::logger> &GetClientLogger();
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
    
} // namespace Banana

// Core Log macros
#define BN_CORE_TRACE(...)      ::Banana::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BN_CORE_INFO(...)       ::Banana::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BN_CORE_WARN(...)       ::Banana::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BN_CORE_ERROR(...)      ::Banana::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BN_CORE_FATAL(...)      ::Banana::Log::GetCoreLogger()->critical(__VA_ARGS__)
// Client Log macros
#define BN_TRACE(...)           ::Banana::Log::GetClientLogger()->info(__VA_ARGS__)
#define BN_INFO(...)            ::Banana::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BN_WARN(...)            ::Banana::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BN_ERROR(...)           ::Banana::Log::GetClientLogger()->error(__VA_ARGS__)
#define BN_FATAL(...)           ::Banana::Log::GetClientLogger()->critical(__VA_ARGS__)