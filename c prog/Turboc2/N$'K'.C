#include<conio.h>
main()
{
int n,i,j,p=1,m;
printf("Enter any number :");
scanf("%d",&n);
if (n%2==0)
m=p=n+1;
else
m=p=n;
for (i=1;i<=p;i++)
{
	for (j=1;j<=m;j++)
	{
	if (j==m || j==1)
	printf("*");
	else
	printf(" ");
	}
printf("\n");
if (i<(n/2)+1)
m=m-1;
else
m=m+1;
}
getch();
}