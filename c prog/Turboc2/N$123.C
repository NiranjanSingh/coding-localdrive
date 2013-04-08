#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,s=1,k=1;
clrscr();
printf("enter how many lines u want");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
	for (j=1;j<=n-i;j++)
	{
	printf("   ");
	}

	for (j=1;j<=s;j++)
	{
	if (j!=1)
	printf("   ");
	printf("  %d",k);
	k=k+1;
	}
s=s+1;
printf("\n");
}
getch();
}