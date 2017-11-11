
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int i,xmax,ymax,xmin,ymin,x1,y1,x2,y2;
float m;
int gd=DETECT,gm;
int start[4],end[4],code[4];
clrscr();
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("\n Enter the bottom left coordinates of view port");
scanf("%d %d",&xmin,&ymin);


printf("\n Enter the top right coordinates of view port");
scanf("%d %d",&xmax,&ymax);

printf("\n Enter the coordinates of starting points of the line");
scanf("%d %d",&x1,&y1);

printf("\n Enter the coordinates of ending points of the line");
scanf("%d %d",&x2,&y2);
for(i=0;i<4;i++){
start[i]=0;
end[i]=0;
}
m=(y2-y1)/(x2-x1);

if(x1<xmin)
start[0]=1;

else if(x1>xmax)
start[1]=1;

if(y1>ymax)
start[2]=1;

else if(y1<ymin)
start[3]=1;

if(x2<xmin)
end[0]=1;

else if(x2>xmax)
end[1]=1;

if(y2>ymax)
end[2]=1;

else if(y2<ymin)
end[3]=1;

for(i=0;i<4;i++)
{code[i]=start[i] + end[i];
 printf("%d", code[i]);
 }

if((code[0]==0)&&(code[1]==0)&&(code[2]==0)&&(code[3]==0)){
if((start[0]==0)&&(start[1]==0)&&(start[2]==0)&&(start[3]==0)
   &&(end[0]==0)&&(end[1]==0)&&(end[2]==0)&&(end[3]==0)){
cleardevice();
printf("\n \t The line is totally visible \n \t and not a clipping candidate");

outtextxy(0,400,"Made By: Kartikay Thakkar");
outtextxy(0,420,"CSE B");
outtextxy(0,440,"Roll no.90");

rectangle(xmin,ymin,xmax,ymax);
line(x1,y1,x2,y2);
getch();
}

else{
cleardevice();
printf("\n \t The line is partially visible");
rectangle(xmin,ymin,xmax,ymax);
line(x1,y1,x2,y2);

if((start[2]==0)&&(start[3]==1)){
x1=x1+(ymin-y1)/m;
y1=ymin;
}


if((end[2]==0)&&(end[3]==1)){
x2=x2+(ymin-y2)/m;
y2=ymin;
}

if((start[2]==1)&&(start[3]==0)){
x1=x1+(ymax-y1)/m;
y1=ymax;
}

if((end[2]==1)&&(end[3]==0)){
x2=x2+(ymax-y2)/m;
y2=ymax;
}

if((start[1]==0)&&(start[0]==1)){
y2=y2+(xmin-x2)*m;
x2=xmin;
}

if((end[1]==0)&&(end[0]==1)){
y2=y2+(xmin-x2)*m;
x2=xmin;
}

if((start[1]==1)&&(start[0]==0)){
y1=y1+(xmax-x1)*m;
x1=xmax;
}

if((end[1]==0)&&(end[0]==0)){
y2=y2+(xmax-x2)*m;
x2=xmax;
}

clrscr();
cleardevice();
printf("\n \t After clipping");
rectangle(xmin,ymin,xmax,ymax);
line(x1,y1,x2,y2);
outtextxy(0,400,"Made By: Kartikay Thakkar");
outtextxy(0,420,"CSE B");
outtextxy(0,440,"Roll no.90");
getch();
}
}

else{
clrscr();
cleardevice();
printf("\n Line is invisible");
rectangle(xmin,ymin,xmax,ymax);
}
getch();

outtextxy(0,400,"Made By: Kartikay Thakkar");
outtextxy(0,420,"CSE B");
outtextxy(0,440,"Roll no.90");
}