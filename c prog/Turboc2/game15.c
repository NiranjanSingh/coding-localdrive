/*This program is game of 15 . Last modified on 16 sept 2012.*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<ctype.h>
char *m[4][4]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","0"};
void PrintM(int,int);
main()
{
	int gd=DETECT,gm;
	int i,j,c;
	char ch='\0';

	initgraph(&gd,&gm," ");
	/*c=1;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		m[i][j]=c++; */

	i=3;
	j=3;
	PrintM(i,j);
	while(ch!='q' && ch!='Q')
	{
		ch=getch();
		if(ch=='P' && i!=0)
		{
			m[i][j]=m[i-1][j];
			i--;
			PrintM(i,j);
		}

		if(ch=='H' && i!=3)
		{
		m[i][j]=m[i+1][j];
		i++;
		PrintM(i,j);
		}

		if(ch=='M' && j!=0)
		{
		m[i][j]=m[i][j-1];
		j--;
		PrintM(i,j);
		}

		if(ch=='K' && j!=3)
		{
		m[i][j]=m[i][j+1];
		j++;
		PrintM(i,j);
		}
	}
	 closegraph();
}


void PrintM(int i,int j)
{
	int a,b;
	int xpos,ypos;
	char *c;
cleardevice();
outtextxy(0,0,"------------------------GAME OF 15 . PRESS Q TO EXIT ---------------------");
settextstyle(0,0,2);
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

xpos=150;
ypos=100;

	for(a=0;a<4;a++)
	{
	for(b=0;b<4;b++)
	{
		if(a==i && b==j)
		c="  ";
		else
		c=m[a][b];
	outtextxy(xpos,ypos,c);
	xpos+=100;

	}
	ypos+=100;
	xpos=150;
	}
}

