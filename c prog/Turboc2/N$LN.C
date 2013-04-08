#include<conio.h>
main()
{
int i,j,n;
char a[20];
clrscr();
printf("enter any number ");
scanf("%d",&n);
printf("enter any character");
scanf("%s",&a);
clrscr();
for (i=1 ;i<=n;i++)
{
	for (j=1;j<=n;j++)
	{
	if (j==1 || j==n)
	{
	printf("%s ",a);
	}
	if (i>=1 && i<=n)
	{
		if (i==j && i!=n )
		{
		printf("%s ",a);
		}
		if(i!=j)
		{
		printf("  ");
		}

	}
	}
printf("\n");
}
getch();
}
