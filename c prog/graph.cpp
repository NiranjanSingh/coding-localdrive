#include<stdio.h>
#include<graphics.h>

int main(void)
{
int gd=DETECT, gm=VGAMAX,i;
initgraph(&gd,&gm,0);
moveto(0,0);
setcolor(4);
for(i=0;i<500;i++) putpixel(i,i,i);
rectangle(50,50,500,200);
getch();
closegraph();
return 0;
}
