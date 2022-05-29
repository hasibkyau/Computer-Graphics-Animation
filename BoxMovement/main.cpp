#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;


int main()
{
while(!kbhit())
{
cout<<"press key to terminate\n";
}
return 0;
}
