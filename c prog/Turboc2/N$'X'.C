#include<conio.h>
#include<stdio.h>
main()
{
int s,n,i,j;
clrscr();
printf("Enter any number ");
scanf("%d",&n);
s=n;
for (i=1;i<=n;i++)
{
	for (j=1;j<=n;j++)
	{
	if (j==i || j==s)
	printf("*");
	else
	printf("  ");
	}
s=s-1;
printf("\n");
}
getch();
}