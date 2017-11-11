#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x,y,x1,x2,y1,y2,dx,dy,step,xinc,yinc,i,xmax,ymax;
	char ch;
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

	if(dx>=dy){
	step=dx;
	}
	else{
	step=dy;
	}

	xinc=dx/step;
	yinc=dy/step;

	x=x1+(xmax/2);
	y=y1+(ymax/2);

	for(i=0;i<step;++i){
	putpixel(x,y,1);
	x=x+xinc;
	y=y+yinc;
	}
	outtext("KARTIKAY THAKKAR");
	getch();
	}