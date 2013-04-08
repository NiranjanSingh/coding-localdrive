#include<stdio.h>
#include<conio.h>
int npow(int a,int b)
{
int r=0;
if (b--==1)
return(a);
else
r = a * npow(a,b);
return(r);
}
main()
{
int m,n,s=0;
clrscr();
printf("Enter any number");
scanf(" %d",&m);
printf("Enter the exponent");
scanf(" %d",&n);
s=npow(m,n);
printf("the m power to the n is %d",s);
getch();
}

