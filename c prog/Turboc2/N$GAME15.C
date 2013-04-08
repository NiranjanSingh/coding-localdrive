/*This program is game of 15 . Last modified on 16 sept 2012.second modification
-- 9 octobeer 2012 -----10 october 2012*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<ctype.h>
void PrintM(int,int,int ***);
int start();
main()
{

	int gd=DETECT,gm;
	int i,j,c,n;
	char ch='\0';
	char ***m;
	char *a[25] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25"};

	n=start();
	if (n==0) exit();
	m=(char ***) malloc(n*sizeof(char));
	*m=(char **) malloc(n*sizeof(char));
	**m=(char *) malloc(n*sizeof(char));
	initgraph(&gd,&gm," ");

/*for initialisation but cant able to convert thats why
initialising by writing if else */
/*	count=1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		m[i][j]=count++;
*/

/*this doesnot worked thats y another idea .
if(n==5)
*m[5][5] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};
*/

	c=0;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
		if(i==n-1 && j==n-1)
		m[i][j]=" ";
		else
		m[i][j]=a[c++];
		}

	i=n;
	j=n;
	PrintM(i,j,m);
	while(ch!='q' && ch!='Q')
	{
		ch=getch();
		if(ch=='P' && i!=0)
		{
			m[i][j]=m[i-1][j];
			i--;
			PrintM(i,j,m);
		}

		if(ch=='H' && i!=3)
		{
		m[i][j]=m[i+1][j];
		i++;
		PrintM(i,j,m);
		}

		if(ch=='M' && j!=0)
		{
		m[i][j]=m[i][j-1];
		j--;
		PrintM(i,j,m);
		}

		if(ch=='K' && j!=3)
		{
		m[i][j]=m[i][j+1];
		j++;
		PrintM(i,j,m);
		}
	}
	 closegraph();
}

int start()
{
	char ch;
	clrscr();
	printf("Welcome to the game of 15. Choose your level : \n1. Easier\n2. Medium\n3. Hard\n");
	ch=getch();
	switch (ch)
	{
		case 1:
		return(3);

		case 2:
		return(4);

		case 3:
		return(5);

		default:
		printf("\nWrong Input. See you next time.");
		sleep(3);
		return 0;
	}


}


void PrintM(int i,int j,int ***m)
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