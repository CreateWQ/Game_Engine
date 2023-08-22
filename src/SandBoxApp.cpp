#define BN_PLATFORM_WINDOWS

#include <Banana.h>

class ExampleLayer : public Banana::Layer {
public:
    ExampleLayer() 
        : Layer("Example") {}

    void OnUpdate() override { BN_INFO("ExampleLayer::Update"); }
    void OnEvent(Banana::Event &e) override { BN_TRACE("{0}", e); }

};

class SandBox : public Banana::Application
{
private:
    /* data */
public:
    SandBox(/* args */) {
        PushLayer(new Banana::ImGuiLayer());
        PushOverlay(new ExampleLayer());
    }

    ~SandBox() {

    }
};

Banana::Application* Banana::CreateApplication() {
    return new SandBox();   
}

