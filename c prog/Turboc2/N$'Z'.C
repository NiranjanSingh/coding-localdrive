#include<conio.h>
main()
{
int n,s,i,j;
clrscr();
printf("Enter any number");
scanf("%d",&n);
s=n;
for (i=1;i<=n;i++)
{
	if (i>1 && i<n)
	{
	s=s-1;
	for (j=1;j<=s;j++)
	{
	if (j==s)
	printf(" *");
	else
	printf("  ");
	}
	}
	else
	{
	for (j=1;j<=n;j++)
	printf(" *");
	}
printf("\n");
}
getch();
}
