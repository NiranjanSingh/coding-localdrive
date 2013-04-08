#include<conio.h>
main()
{
int n,i,m,s,j;
char c[1];
clrscr();
printf("Enter any number: ");
scanf("%d",&n);
printf("Enter any character :");
scanf("%s",&c);
s=n;
for (i=1;i<=n;i++)
{
if (n%2 ==0)
m=n/2;
else
m=(n/2) +1;
if ( i<=m)
{
	for (j=1;j<=n;j++)
	{
	if (j==i || j==1 || j==n || j==s)
	printf("%s ",c);
	else
	printf("  ");
	}
}
else
{
	for (j=1;j<=n;j++)
	{
	if (j==1 || j==n)
	printf("%s ",c);
	else
	printf("  ");
	}
}
printf("\n");
s=s-1;
}
getch();
}
