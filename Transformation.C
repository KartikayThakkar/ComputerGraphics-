#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm,xmax,ymax,x1,y1,x2,y2,x3,y3,x4,y4,i,j,tx,ty;
int p[3][3],translation[3][3],k,resultant[3][3],nx1,nx2,nx3,ny1,ny2,ny3;

initgraph(&gd,&gm,"C:\\TC\\BGI");

clrscr();

xmax=getmaxx();
ymax=getmaxy();

line(xmax/2,0,xmax/2,ymax);
line(0,ymax/2,xmax,ymax/2);

printf("\n Enter the coordinates of the triangle:");
scanf(" %d %d",&x1,&y1);
scanf(" %d %d",&x2,&y2);
scanf(" %d %d",&x3,&y3);

setcolor(5);
x1=x1+xmax/2;
y1=ymax/2-y1;

x2=x2+xmax/2;
y2=ymax/2-y2;

x3=x3+xmax/2;
y3=ymax/2-y3;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);

printf("\n Enter the cooridnates of the point you want to retain :");
scanf("%d %d",&x4,&y4);

tx=-x4;
ty=-y4;

nx1=x1+tx;
nx2=x2+tx;
nx3=x3+tx;

ny1=y1+ty;
ny2=y2+ty;
ny3=y3+ty;
/*translation[0][0]=1;
translation[0][1]=0;
translation[0][2]=0;
translation[1][0]=0;
translation[1][1]=1;
translation[1][2]=0;
translation[2][0]=tx;
translation[2][1]=ty;
translation[2][2]=1;

p[0][0]=x1;
p[1][0]=x2;
p[2][0]=x3;
p[0][1]=y1;
p[1][1]=y2;
p[2][1]=y3;
p[0][2]=1;
p[1][2]=1;
p[2][2]=1;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
resultant[i][j]=0;
for(k=0;k<3;k++)
{
resultant[i][j]=resultant[i][j] +p[i][k]*translation[k][j];

}
}
}

setcolor(6);
delay(25);
line(resultant[0][0],resultant[0][1],resultant[1][0],resultant[1][1]);
delay(25);
line(resultant[1][0],resultant[1][1],resultant[2][0],resultant[2][1]);
delay(25);
line(resultant[0][0],resultant[0][1],resultant[2][0],resultant[2][1]);
*/

setcolor(3);
line(nx1,ny1,nx2,ny2);
line(nx3,ny3,nx2,ny2);
line(nx1,ny1,nx3,ny3);

setcolor(5);
outtextxy(40,ymax-100,"Kartikay Thakkar");
outtextxy(40,ymax-80,"Roll No.:90");
outtextxy(40,ymax-60,"CSE-B(3rd Semester");
outtextxy(40,ymax-40,"Date:30/08/2017");
getch();

closegraph();
}
