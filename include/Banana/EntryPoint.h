#pragma once 

#ifdef BN_PLATFORM_WINDOWS 

extern Banana::Application* Banana::CreateApplication();

int main(int argc, char** argv) {
    printf("Banana Engine");
    auto app = Banana::CreateApplication();
    app->Run();
    delete app;
}

#endif
    