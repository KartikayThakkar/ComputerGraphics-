#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,xmax,ymax;
char ch;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
xmax=getmaxx();
ymax=getmaxy();

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(xmax/2,ymax/2,xmax/3);
floodfill(xmax/2,ymax/2,YELLOW);


setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(xmax/3,ymax/3,40);
floodfill(xmax/3,ymax/3,BLACK);


setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(639-(xmax/3),(ymax/3),40);
floodfill(639-(xmax/3),(ymax/3),BLACK);

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
line(290,260,350,260);
line(290,260,320,210);
line(350,260,320,210);
floodfill(xmax/2,ymax/2,BLACK);
line(3*xmax/4-60,(3*ymax/4)-10,xmax/4+60,(3*ymax/4)-10);
arc(xmax/2,ymax/2,180+45,270+45,xmax/5);
//printf("%d,%d",xmax,ymax);
settext(4);
outtext("KARTIKAY THAKKAR");
getch();
}