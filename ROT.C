#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{ int gd=DETECT,gm,xmax,ymax;
 float x1,y1,x2,y2,x3,y3,p1,q1,p2,q2,p3,q3,tx,ty,Q,xn1,yn1,xn2,yn2,xn3,yn3;
 clrscr();
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 xmax=getmaxx();
 ymax=getmaxy();
 line(0,ymax/2,xmax,ymax/2);
 line(xmax/2,0,xmax/2,ymax);
 printf("enter the coordinates for triangle:");
 scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
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
  printf("enter the rotation angle:");
  scanf("%f",&Q);
  Q=(Q*3.14/180);
  printf("enter the pt. to be fixed:");
  scanf("%f%f",&tx,&ty);
 printf("By: Diksha");
 // printf("\n Date: 3.10.2017");
  x1=x1-tx;
  y1=(y1-ty);
  x2=(x2-tx);
  y2=(y2-ty);
  x3=(x3-tx);
  y3=(y3-ty);
  xn1=x1*cos(Q)-y1*sin(Q);
  yn1=x1*sin(Q)+y1*cos(Q);
  xn2=x2*cos(Q)-y2*sin(Q);
  yn2=x2*sin(Q)+y2*cos(Q);
  xn3=x3*cos(Q)-y3*sin(Q);
  yn3=x3*sin(Q)+y3*cos(Q);
  xn1=(xn1+tx);
  yn1=(yn1+ty);
  xn2=(xn2+tx);
  yn2=(yn2+ty);
  xn3=(xn3+tx);
  yn3=(yn3+ty);
  p1=xn1+xmax/2;
 q1=yn1+ymax/2;
  p2=xn2+xmax/2;
  q2=yn2+ymax/2;
  p3=xn3+xmax/2;
  q3=yn3+ymax/2;
  line(p1,q1,p2,q2);
  line(p2,q2,p3,q3);
  line(p3,q3,p1,q1);
  outtextxy(p1,q1,"A\'");
  outtextxy(p2,q2,"B\'");
  outtextxy(p3,q3,"C\'");
  getch();
  closegraph();
  }

