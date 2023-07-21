#define BN_PLATFORM_WINDOWS
#define _WIN32_WINDOWS

#include <Banana.h>

class SandBox : public Banana::Application
{
private:
    /* data */
public:
    SandBox(/* args */) {

    }
    ~SandBox() {

    }
};

Banana::Application* Banana::CreateApplication() {
    return new SandBox();   
}

