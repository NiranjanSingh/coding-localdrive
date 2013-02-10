/*This program is made by niranjan for making graphs
Note:For accuracy multiply 2/9 with d for trignometrical functions
 and 3.17/9 for other so enjoy it!!*/
#include<stdio.h>

#include<stdlib.h>
#include<graphics.h>
#include<math.h>
long double mod(long double x);
int main()
{
int gd=DETECT,gm,i;
float d;
long double x,c=3.1415926535897932384626433832795;
initgraph(&gd,&gm,0);
setcolor(8 + 0);
setlinestyle(1,1,NORM_WIDTH);
line(639,0,639,479);
line(0,479,639,479);
for (i=0;i<=640;i=i+20)
{
line(0,i,640,i);
line(i,0,i,640);
putpixel(i,242,15);
}
	setcolor(7);
	setlinestyle(0,1,NORM_WIDTH);
line(320,0,320,480);
line(0,240,640,240);
/*	outtextxy(317,218,"- 1");
	outtextxy(320,240,"0");
	outtextxy(317,258,"- -1");*/
	outtextxy(508,468,"Made by Niranjan");
for (d=-1440;d<=1440;d=d+0.1)
{
	x=d*c/180;
	putpixel(320+d*2/9,240-(1/tan(x)*20),3);
	putpixel(320+d*2/9,240-(sin(x)*20),12);
	delay(1);
}
for(d=-1440;d<=1440;d=d+0.1)
{
	x=d*c/180;
	putpixel(320+d*2/9,240-(sin(x)*20),0);
delay(1);
}

closegraph();
return 0;
}
long double mod(long double x)
{
if ( x < 0)
x=-1*x;
return x;
}
