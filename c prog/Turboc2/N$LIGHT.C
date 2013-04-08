/*program to print multiple pattern like in marriage ceremony*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int n=7;
char m[7][7];
int i,x,y1,y2,c,chk,mid;

void initm()
{

	int a,b;
	for(a=0;a<n;a++)
	for(b=0;b<n;b++)
	m[a][b]='.';
}

void pattern1()
{

	c=i-2;
	x=mid-c;
	y1=mid;
	y2=mid;
	while(x<=mid+c)
	{
		m[x][y1]='*';
		m[x][y2]='*';
		x++;
		if(x>mid)
		{
		y1++;
		y2--;
		}
		else
		{
		y1--;
		y2++;
		}
	}
	if (i==mid+2) c=0;
}

void pattern2()
{

	x=0;
	y1=mid-c/2;
	y2=mid+c/2;
	chk=0;
	while(x<=n-1)
	{
		m[x][y1]='*';
		m[x][y2]='*';
		if(y1==0)
		{
		x+=c;
		chk=1;
		m[x][y1]='*';
		m[x][y2]='*';
		}
		if(y1>0 && chk==0)
		{
		x++;
		y1--;
		y2++;
		}
		if(chk==1)
		{
		x++;
		y1++;
		y2--;
		}
	}

}

void display()
{
	int a,b;
	clrscr();
	printf("\t\t\tWELCOME TO CHUK-BHUK CHUK-BHUK\n\n Press any key and wait to exit.......\n\n");

	for(a=0;a<n;a++)
	{
	printf("\t\t\t");
		for(b=0;b<n;b++)
		printf(" %c",m[a][b]);
	printf("\n");
	}
}

main()
{
	mid=(n-1)/2;

	while(!kbhit())
	{

		for(i=1;i<=n+1;i++)
		{
		initm();
		if (i>1 && i<=mid+2)
		{
			pattern1();
		}
		else if(i!=1)
		{
			c=c+2;
			pattern2();
		}
		display();
		delay(200);
		if (i==n+1)
		{
		initm();
		display();
		delay(200);
		}
		}

		for(i=n+1;i>=1;i--)
		{
		initm();
		if(i>mid+2)
		{
			pattern2();
			c=c-2;
		}
		else
		{
			pattern1();
		}
		display();
		delay(200);
		}
	}
}