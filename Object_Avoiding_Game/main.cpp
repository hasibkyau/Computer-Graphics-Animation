#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);

    initwindow(width, height, "Object Avoiding Game", -3, -3);

    int x = 100, y = 100;

    while(1)
    {
        cleardevice();
        circle(x, y, 30);

        if(GetAsyncKeyState(VK_RIGHT)){
                if(x <= width - 100){x += 10;}
        }

        else if(GetAsyncKeyState(VK_LEFT)){
                if(x > 100) x -= 10;
        }

        else if(GetAsyncKeyState(VK_UP)){
            if(y >= 100){y -= 10;}
        }

        else if(GetAsyncKeyState(VK_DOWN)){
            if(y <= height - 100){y += 10;}
        }

        if(GetAsyncKeyState(VK_RETURN))
            break;
        delay(10);
    }
    closegraph();
}
