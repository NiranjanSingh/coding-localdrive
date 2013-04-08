#include<conio.h>
main()
{
int i,j,n;
clrscr();
printf("enter any number b/w 1 to 15");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
	for (j=1;j<=n;j++)
	{
		if (i == 1 || i == n)
		{
		printf("*  \a");
		}
		else if(j == 1 || j == n)
		{
		printf("*  \a");
		}
		else if(j!=1 && j!=n)
		{
		printf("   ");
		}
	}
printf("\n");
}
getch();
}