#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
int r,x,y,p,x1,y1,xmax,ymax;

initgraph(&gd,&gm,"C:\\TC\\BGI");

xmax=getmaxx();
ymax=getmaxy();

line(xmax/2,0,xmax/2,ymax);
line(0,ymax/2,xmax,ymax/2);
x1=xmax/2;
y1=ymax/2;

printf("Enter the radius ");
scanf("%d",&r);

x=0;
y=r;
p=1-r;

while(x<=y)
{

putpixel(x1+x,y1-y,1);
putpixel(x1-x,y1-y,2);
putpixel(x1+x,y1+y,3);
putpixel(x1-x,y1+y,4);
putpixel(x1+y,y1-x,5);
putpixel(x1-y,y1-x,6);
putpixel(x1+y,y1+x,7);
putpixel(x1-y,y1+x,8);
if (p<=0)
{
p=p+(2*x)+3;
}
else
{
p=p+((2*(x-y)+5));
y=y-1;
}

x=x+1;\
}
outtextxy(40,ymax-100,"Kartikay Thakkar");
getch();
}