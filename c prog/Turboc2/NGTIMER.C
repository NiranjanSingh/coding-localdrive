#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
struct time t;
int gd=DETECT,gm,x,y,i;
clrscr();
initgraph(&gd,&gm,"c:\turboc2\egavga.bgi");
/*x=getmaxx();
y=getmaxy();*/
while (!kbhit())
{
clrscr();
setcolor(RED);
settextstyle(8,HORIZ_DIR,2);
outtextxy(250,5,"DAWRA");
gettime(&t);
printf("\n\n\n\n\n The current time is : %2d : %2d : %2d : %2d \n",t.ti_hour,t.ti_min,t.ti_sec,t.ti_hund);
delay(100);
}
getch();
}