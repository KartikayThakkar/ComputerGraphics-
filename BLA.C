#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x,y,x1,x2,y1,y2,dx,dy,p,m,xmax,ymax;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	xmax=getmaxx();
	ymax=getmaxy();
	line(0,ymax/2,xmax,ymax/2);
	line(xmax/2,0,xmax/2,ymax);
	setcolor(4);
	printf("\n Enter the starting coordinates of the line ");
	scanf("%d %d",&x1,&y1);
	printf("\n Enter end coordinates of the line");
	scanf("%d %d",&x2,&y2);

	dx=x2-x1;
	dy=y2-y1;

	m=dy/dx;

	if(m<=1){
	x=x1+xmax/2;
	y=y1+(ymax/2);

	putpixel(x,y,1);

	p=2*dy-dx;

	while(x<(x2+xmax/2)){
	x=x+1;

	if(p<=0){
	p=p+(2*dy);
	}
	else{
	y=y+1;
	p=p+(2*dy)-(2*dx);
	}
	putpixel(x,y,15);
	}
	}
	else if(m>1){
	p=2*dx-dy;

	x=x1+(xmax/2);
	y=y1+(ymax/2);

	putpixel(x,y,15);

	while(y<(y2+ymax/2)){
	y=y+1;

	if(p<=0){
	p=p+(2*dx);
	}
	else{
	x=x+1;
	p=p+(2*dx)-(2*dy);
	}
	putpixel(x,y,5);
	}
	}
	outtext("KARTIKAY THAKKAR");
	getch();
	}