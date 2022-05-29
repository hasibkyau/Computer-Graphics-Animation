#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>

using namespace std;

void drawline(int x0, int y0, int x1, int y1)
{
    int gdriver=DETECT, gmode, error;
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    int dx, dy, p, x, y;

    dx=x1-x0;
    dy=y1-y0;

    x=x0;
    y=y0;

   // cout << "X = " << x << "Y = " << y;

    p=2*dy-dx;
    cout << p;

    while(x<x1)
    {
        if(p>=0)
        {
            putpixel(x,y,7);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p=p+2*dy;
        }
        x=x+1;
        delay(100);
    }
    closegraph();
}

int main()
{
    int x0, y0, x1, y1;


    cout << "Enter co-ordinates of first point;" << endl;
    cout << "value of x0: ";
    cin >> x0;
    cout << "Value of y0: ";
    cin >> y0;

    cout << "Enter co-ordinates of second point;" << endl;
    cout << "Value of x1: ";
    cin >> x1;
    cout << "Value of y1: ";
    cin >> y1;

    drawline(x0, y0, x1, y1);

    return 0;
}
