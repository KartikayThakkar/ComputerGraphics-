#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{ int gd=DETECT,gm,x,y,x1,y1,x2,y2,x3,y3,xmax,ymax;
 clrscr();
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 xmax=getmaxx();
 ymax=getmaxy();
 line(0,ymax/2,xmax,ymax/2);
 line(xmax/2,0,xmax/2,ymax);
 printf("enter the coordinates for triangle:");
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 x1=x1+xmax/2;
 y1=y1+ymax/2;
  x2=x2+xmax/2;
  y2=y2+ymax/2;
  x3=x3+xmax/2;
  y3=y3+ymax/2;
  line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
  line(x3,y3,x1,y1);
   outtextxy(x1,y1,"A");
  outtextxy(x2,y2,"B");
  outtextxy(x3,y3,"C");
  printf("enter the translation factors:");
  scanf("%d%d",&x,&y);
  printf("By: Shivani Bhardwaj");
 printf("\n Date: 5.9.2017");
  x1=x1+x;
 y1=y1+y;
  x2=x2+x;
  y2=y2+y;
  x3=x3+x;
  y3=y3+y;
  line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
  line(x3,y3,x1,y1);
   outtextxy(x1,y1,"A\'");
  outtextxy(x2,y2,"B\'");
  outtextxy(x3,y3,"C\'");
  getch();
  closegraph();
  }

