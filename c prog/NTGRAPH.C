#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
void sine();
void ncos();
int main()
{
int gd=DETECT,gm;
float y;
initgraph(&gd,&gm,0);
line(320,0,320,480);
line(0,240,640,240);
outtextxy(317,210,"-1");
outtextxy(320,240,"0");
outtextxy(317,270,"--1");
sine() ; ncos();
getch();
closegraph();
}
void sine()
{
long double c=3.1415926535897932384626433832795;
int d;
for (d=1;d<1440*2;d=d+1)
{
putpixel(d*2/9,240-(sin(d*c/180)*30),2);
delay(999);
if (d%90==0 && d>0 && d<1440*5)
putpixel(d*2/9,242,15+128);
}
}
void ncos()
{
long double c=3.1415926535897932384626433832795;
int d;
for (d=1;d<1440*2;d=d+1)
{
putpixel(d*2/9,240-(cos(d*c/180)*30),2);
delay(999);
if (d%90==0 && d>0 && d<1440*5)
putpixel(d*2/9,242,15+128);
}
return 0;
}
