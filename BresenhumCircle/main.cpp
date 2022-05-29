//Bresenhum Circle drawing Algorithm
//Md. Hasibur Rahman
//CSE 7th Batch
//29-03-2022

#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;

void drawCircle(int x, int y, int xc, int yc);

int main()
{
	int gd = DETECT, gm;
	int r, xc, yc, pk, x, y;
	initgraph(&gd, &gm, "C:TCBGI");
	cout<<"Enter the center co-ordinates\n";
	cin>>xc>>yc;
	cout<<"Enter the radius of circle\n";
	cin>>r;

	pk = 5/4 - r;
	x=0; y = r;

	drawCircle(x,y,xc,yc);

	while(x < y)
	{
		if(pk <= 0)
		{
			pk = pk + (2*x) + 3;
			drawCircle(++x,y,xc,yc);
		}
		else
		{
			pk = pk + (2*(x-y)) + 5;
			drawCircle(++x,--y,xc,yc);
		}
	}

	getch();
	closegraph();
}

void drawCircle(int x, int y, int xc, int yc)
{
	putpixel(x+xc,y+yc,WHITE);
	putpixel(-x+xc,y+yc,RED);
	putpixel(x+xc, -y+yc,YELLOW);
	putpixel(-x+xc, -y+yc, GREEN);
	putpixel(y+xc, x+yc, BLUE);
	putpixel(y+xc, -x+yc, RED);
	putpixel(-y+xc, x+yc, YELLOW);
	putpixel(-y+xc, -x+yc, GREEN);
}
