#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#define MAXCOUNT 30
main()
{
int gd=DETECT,gm;
int x,y,i,j;
int maxx,maxy,count;
float xscale,yscale,left,top,xside,yside,zx,zy,cx,cy,tempx;
left=-1.75;
top=-0.25;
xside=1.27;
yside=0.45;
clrscr();
initgraph(&gd,&gm,"");
maxx=getmaxx();
maxy=getmaxy();
xscale=xside/maxx;
yscale=yside/maxy;
rectangle(0,0,maxx,maxy);
for(y=1;y<=maxy-1;y++)
{
	for(x=1;x<=maxx-1;x++)
	{
	cx=x*xscale+left;
	cy=y*yscale+top;
	zx=0;
	zy=0;
	count=0;
	while(( zx*zx + zy*zy < 4) && (count < MAXCOUNT))
	{
		tempx=zx*zx-zy*zy+cx;
		zy=2*zx*zy+cy;
		zx=tempx;
		count=count+1;
	}
	putpixel(x,y,count);
	}
}
getch();
closegraph();
#undo f}


