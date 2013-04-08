#include<conio.h>
#include<stdio.h>
main()
{
int n,r,n1;
long int b=0,i=1;
clrscr();
printf("Enter any number : ");
scanf("%d",&n);
n1=n;
while (n>0)
{
	r=n%2;
	b=(r*i) +b;
	n=n/2;
	i=i*10;
}
printf(" The binary form of %d is : %ld ",n1,b);
printf("\n\n\n...........................Made by niranjan ....................");
getch();
}
