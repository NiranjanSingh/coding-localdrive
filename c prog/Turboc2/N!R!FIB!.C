#include<stdio.h>
#include<conio.h>
void gfibbo(int n)
{
if (n==0)
return;
else
{
gfibbo(n-1);
printf("\n %d",fibbo(n));
}
}
int fibbo(int n)
{
if (n==0 || n==1)
return(n);
else
return(fibbo(n-1) + fibbo(n-2));
}
main()
{
int n;
clrscr();
printf("Enter the v alue");
scanf("%d",&n);
gfibbo(n);
getch();
}