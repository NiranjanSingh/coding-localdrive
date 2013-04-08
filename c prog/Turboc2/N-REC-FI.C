#include<stdio.h>
#include<conio.h>
main()
{
int fibbo(int ,int ,int ,int ,int );
int a=0,b=1,c=0,n,d=1;
clrscr();
printf("Enter the number up to which you want enter fibbonacci series");
scanf("%d",&n);
fibbo(a,b,c,n,d);
getch();
}
int fibbo(int a,int b,int c,int n,int d)
{
if (d<=n)
{
printf(" %d ",c);
c=a+b;
a=b;
b=c;
d++;
fibbo(a,b,c,n,d);
}
return;
}

