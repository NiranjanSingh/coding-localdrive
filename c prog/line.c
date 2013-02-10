#include<stdio.h>
#include<math.h>
#include<graphics.h>
int main(void)
{
int gd=DETECT, gm=VGAMAX,i;
int x1,y1,x2,y2,dx,dy,step,k;
float xinc,yinc,x,y;
printf("Enter value for x1,y1 and x2,y2");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
initgraph(&gd,&gm,0);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
step=abs(dx);
else
step=abs(dy);
xinc =dx/step;
yinc=dy/step;
x=x1;
y=y1;
putpixel(round(x),round(y),1);
for(k=1;k<=step;k++)
{
x=x+xinc;
y=y+yinc;
putpixel(round(x),round(y),1);
}
getch();
closegraph();
return 0;
}
