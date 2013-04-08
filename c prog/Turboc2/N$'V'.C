#include<conio.h>
#include<stdio.h>
main()
{
int s,n,j,i;
clrscr();
printf("enter any number");
scanf("%d",&n);
s=2n-3;
for (i=1;i<=n;i++)
{
	for (j=1;j<=i-1;j++)
	printf(" ");
printf("*");
	for (j=1;j<=s;j++)
	printf(" ");
printf("*");
printf("\n");
s=s-2;
}
getch();
}