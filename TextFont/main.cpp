#include<graphics.h>
#include <stdio.h>
#include<conio.h>
#include <unistd.h>
//#include <Windows.h>

int main()
{
    initwindow(640,480,"I love you");



    while(TRUE){
    setcolor(YELLOW);
    settextstyle(8, 0, 5);
    outtextxy(130,35,"I love You Sir");

    Sleep(1000);

    setcolor(GREEN);
    settextstyle(8, 0, 5);
    outtextxy(130,35,"I love You Sir");
    Sleep(1000);
    }



    getch();
}
