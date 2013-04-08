#include<stdio.h>
#include<conio.h>
main()
{
int gcd(int ,int ,int );
int a,b,c;
clrscr();
printf("Enter two numbers of which you want to find hcf");
scanf("%d %d",&a,&b);
if (a>b)
c=gcd(a,b,b);
else
c=gcd(b,a,a);
printf("The greatest common  divisor is %d",c);
getch();
}
int gcd(int x,int y,int c)
{
if (x%y==0 && c%y==0)
return(y);
else
return(gcd(x,y -1,c));
}