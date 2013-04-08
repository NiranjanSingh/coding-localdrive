#include<conio.h>
main()
{
int n,i,j,s;
printf("Entyer any number :");
scanf("%d",&n);
if (n%2 ==0)
s=n/2;
else
s=(n/2)+1;
for (i=1;i<=n;i++)
{
	if (i<=n/2)
	{
	printf("*");
		for (j=1;j<=n-2;j++)
		printf(" ");
	printf("*");
	}
	else
	{
		for (j=1;j<=n;j++)
		{
		if (j==1 || j==n || j==i || j==s)
		printf("*");
		else
		printf(" ");
		}
		s=s-1;
	}
printf("\n");
}
getch();
}
