#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
int d=1;
char c=d;
initgraph(&gd,&gm,"");
line(100,50,100,450);
line(100,450,500,450);
line(200,50,200,450);
line(300,50,300,450);
line(400,50,400,450);
line(500,450,500,50);
line(500,50,100,50);
/*making horizontal lines*/
line(100,150,500,150);
line(100,250,500,250);
line(100,350,500,350);

/* printing numbers */
gotoxy(150,100);
d=12;
/*a[0]=d;*/
settextstyle(0,0,2);
outtextxy(150,100,"N");
outtextxy(150,200,"Niranjan Singh ");
getch();
closegraph();
}