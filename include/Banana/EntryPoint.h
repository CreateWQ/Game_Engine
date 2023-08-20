#pragma once 

#ifdef BN_PLATFORM_WINDOWS 

extern Banana::Application* Banana::CreateApplication();

int main(int argc, char** argv) {

    Banana::Log::Init();
    BN_CORE_WARN("Initialized Log!");
    int a = 10;
    BN_INFO("Hello! Var = {0:10d}", a);
    BN_FATAL("Fatal!!");
    printf("Banana Engine");
    auto app = Banana::CreateApplication();
    app->Run();
    delete app;
}

#endif
    