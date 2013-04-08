#include<conio.h>
main()
{
int i,s,j,n,l;
clrscr();
printf("enter any number ");
scanf("%d",&n);
clrscr();
l=n-1;
for (i=1;i<=n;i=i+2)
{
	for (s=1;s<=l;s++)
	{
	printf(" ");
	}
	for (j=1;j<=i;j++)
	{
	printf("* ");

	}
	l=l-1;
printf("\n");
}
getch();
}
