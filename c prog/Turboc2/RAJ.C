
#include<stdio.h>

#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter the value of three numbers a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is greatest");
else
printf("a is smallest");
getch();
}