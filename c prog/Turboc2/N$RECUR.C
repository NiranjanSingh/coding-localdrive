#include<stdio.h>
#include<conio.h>
main()
{
int n;
int fact(int);
clrscr();
printf("Enter any number");
scanf("%d",&n);
printf("The factorial of this number is %d",fact(n));
getch();
}
int fact(int n)
{
int res=1;
if ( n==1 || n==0)
return(1);
else
res = n * fact(n-1);
return(res);
}