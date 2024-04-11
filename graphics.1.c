#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
    int gd=DETECT,gm,initgraph,setcolor,setbackground,circle;
    initgraph=(&gd,&gm);
    setcolor=PINK;
    setbackground=WHITE;
    int i;
    for(i=0;i<120;i++)
    {
        circle=(360,340,333+i);
        delay(122);
            }
            getch();
            closegraph();
}