/*This program moves the character or any thing typed by printing and*/
/*moving and erasing previous typed!!!!!!!!*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x=40,y=1,c=0,i=1;
while (!kbhit())
{

	if (x<=49 && y<=10 && c==0)
	{
	x=x+1;
	y=y+1;
	i=i+1;
	gotoxy(i,24);
	printf("Made by niranjan");
	delay(9999);
	clrscr();
	}
	else if(x>=41 && y<=20)
	{
	x=x-1;
	y=y+1;
	i=i+1;
	gotoxy(i,24);
	printf("Made by niranjan");
	delay(9999);
	clrscr();

	}
	else if(x>=31 && y>=12)
	{
	x=x-1;
	y=y-1;
	c=1;
	i=i+1;
	gotoxy(i,24);
	printf("Made by niranjan");
	delay(9999);
	clrscr();

	}
	else if(x<=39 && y>=2 && c==1)
	{
	x=x+1;
	y=y-1;
	i=i+1;
	gotoxy(i,24);
	printf("Made by niranjan");
	delay(9999);
	clrscr();
		if (x==40 && y==1)
		c=0;
		if (i==80)
		i=1;

	}

gotoxy(x,y);
printf("|*!*|");
delay(99999);
clrscr();
}
getch();
}
