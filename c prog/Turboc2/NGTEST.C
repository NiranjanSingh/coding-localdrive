#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
main()
{
int gd=DETECT,gm,error,i=0,n=1;
printf("Enter the spacing between the lines : ");
scanf("%d",&n);
initgraph(&gd,&gm,"");
error=graphresult();
if (error != grOk)
{
printf("Graphics error: %s\n",grapherrormsg(error));
getch();
exit(1);
}
begin:
while(i<=640)
{
for (i=0;i<=640;i=i+n)
{
setcolor(random(getmaxcolor()));
line(0,i,640,i);
line(i,0,i,640);
}
}
sleep(5);
while(!kbhit())
{
	setcolor(random(15));
	circle(random(getmaxx()),random(getmaxy()),random(30));
}
cleardevice();
while(kbhit())
{
setcolor(random(15));
rectangle(random(getmaxx()),random(getmaxy()),random(getmaxx()),random(getmaxy()));
line(random(getmaxx()),random(getmaxy()),random(getmaxx()),random(getmaxy()));
}
getch();
closegraph();
}