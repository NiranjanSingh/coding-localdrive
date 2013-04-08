/*this is game of 15 and last modified on 17 sept 2012, then i remove
the graphics and made it simply last modified : 13-11-2012...happy diwali*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int n;
int **m;

void PrintM(int a,int b);

void initM();

void main()
{
	int i,j,c;
	char ch,che='B';
while(che=='B' || che=='b')
{
ch='\0';
	initM();
	c=0;
	for(i=n-1;i>=0;i--)
		for(j=n-1;j>=0;j--)
		m[i][j]=c++;

	i=n-1;
	j=n-1;
	PrintM(i,j);
	while(ch!='q' && ch!='Q' && ch!='B' && ch!='b')
	{
		ch=getch();
		if(ch=='P' && i!=0)
		{
			m[i][j]=m[i-1][j];
			i--;
			PrintM(i,j);
		}

		if(ch=='H' && i!=n-1)
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

		if(ch=='K' && j!=n-1)
		{
		m[i][j]=m[i][j+1];
		j++;
		PrintM(i,j);
		}
	}



if(ch=='q' || ch=='Q')
{
	clrscr();
	printf("\n\n\t\tFOCUT MAI KHELNE K LIYE ******** THANKS ********* \n\n\n\n*********JuzZZ kidding buddy...thnx for playing......");
	getch();
	exit(0);
}

}
}

void initM()
{
	clrscr();
	printf("\t\tWELCOME TO THE GAME \n\t\t\t***D!MAAG KA GYM***\n\n");
	printf("kAA bEtaa ketnaa PaaN!! mAi BADA : \n\nLevel 1 : BaBuAAA --- 2 DaBaawa\n\nLevel 2 : LaYIkaa --- 3 DaBaawa\n\nLevel 3 : JaWaaAn --- 4 DaBaawa \n\nLevel 4 : BAAAP!! --- 5 DaBaawa\n\n\n\nPress  9 : About\nPress 10 : Exit\n\n\n\n");
	scanf("%d",&n);
	if(n==9)
	{
	clrscr();
	printf("\n\nThis is a puzzle game in which you have to arrange numbers \nbegining from 1 and in left to right and top to bottom order.\nUse arrow keys to shift numbers\n\n\n\nMade by: Niranjan\n\n Press any key to go back.");
	getch();
	clrscr();
	printf("\t\tWELCOME TO THE GAME \n\t\t\t***D!MAAG KA GYM***\n\n");
	printf("kAA bEtaa ketnaa PaaN!! mAi BADA : \n\nLevel 1 : BaBuAAA --- 2 DaBaawa\n\nLevel 2 : LaYIkaa --- 3 DaBaawa\n\nLevel 3 : JaWaaAn --- 4 DaBaawa \n\nLevel 4 : BAAAP!! --- 5 DaBaawa\nPress 10 : Exit\n\n\n\n");

	scanf("%d",&n);
	}
	if(n==10) exit(0);
	/*free(m);
	free(*m);*/
	*m=(int *)realloc(*m,5*sizeof(int));
	m=(int **)realloc(m,5*sizeof(int));


}

void PrintM(int a,int b)
{

int i,j;
	clrscr();
	printf("\n\n");
	for(i=0;i<n;i++)
	{
	if(i==0	)
	{
		printf("\n\t\t\t");
		for(j=0;j<n;j++) printf	("---------");
		printf("\n\n");
	}
	for(j=0;j<n;j++)
	{

		if(j==0) printf("\t\t\t|");
		if(i==a && j==b)
		printf("        |");
		else if(m[i][j]<10)
		printf("    %d   |",m[i][j]);
		else
		printf("   %d   |",m[i][j]);
	}
		printf("\n\t\t\t");
	for(j=0;j<n;j++)
		printf("---------");
	printf("\n\n");
	}

printf("\n\n\n\n\n KhAtam kare Khatir 'Q' AAaooo KheLee KhatIII 'B' daBAwaa...");
}
