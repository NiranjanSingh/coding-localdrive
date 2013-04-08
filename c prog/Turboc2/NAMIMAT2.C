/*This program moves the character or any thing typed by printing and*/
/*moving and erasing previous typed!!!!!!!!*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x=40,y=1,c=0;
while (!kbhit())
{

	if (x<=49 && y<=10 && c==0)
	{
	x=x+1;
	y=y+1;
	gotoxy(x,y);
	printf("L");
	}
	else if(x>=41 && y<=20)
	{
	x=x-1;
	y=y+1;
	gotoxy(x,y);
	printf("O");
	}
	else if(x>=31 && y>=12)
	{
	x=x-1;
	y=y-1;
	c=1;
	gotoxy(x,y);
	printf("V");
	}
	else if(x<=39 && y>=2 && c==1)
	{
	x=x+1;
	y=y-1;
	gotoxy(x,y);
	printf("E");
	if (x==40 && y==1)
	c=0;
	}

gotoxy(x,y);
delay(99999);
clrscr();
}
}
