#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{ int gd=DETECT,gm,x,y,x1,y1,x2,y2,x3,y3,xmax,ymax,p1,q1,p2,q2,p3,q3;
 clrscr();
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 xmax=getmaxx();
 ymax=getmaxy();
 line(0,ymax/2,xmax,ymax/2);
 line(xmax/2,0,xmax/2,ymax);
 printf("enter the coordinates for triangle:");
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 p1=x1+xmax/2;
 q1=y1+ymax/2;
  p2=x2+xmax/2;
  q2=y2+ymax/2;
  p3=x3+xmax/2;
  q3=y3+ymax/2;
  line(p1,q1,p2,q2);
  line(p2,q2,p3,q3);
  line(p3,q3,p1,q1);
  outtextxy(p1,q1,"A");
  outtextxy(p2,q2,"B");
  outtextxy(p3,q3,"C");
  printf("enter the scaling factors:");
  scanf("%d%d",&x,&y);
  printf("By: Meghal Singhal");
 printf("\n Date: 5.9.2017");
  x1=(x1*x);
 y1=(y1*y);
  x2=(x2*x);
  y2=(y2*y);
  x3=(x3*x);
  y3=(y3*y);
   p1=x1+xmax/2;
 q1=y1+ymax/2;
  p2=x2+xmax/2;
  q2=y2+ymax/2;
  p3=x3+xmax/2;
  q3=y3+ymax/2;
  line(p1,q1,p2,q2);
  line(p2,q2,p3,q3);
  line(p3,q3,p1,q1);
  outtextxy(p1,q1,"A\'");
  outtextxy(p2,q2,"B\'");
  outtextxy(p3,q3,"C\'");
  getch();
  closegraph();
  }

