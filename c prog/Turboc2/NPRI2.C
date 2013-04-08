#include<stdio.h>
#include<conio.h>
main()
{
int f,l,i,c,j;
clrscr();
printf("Enter the starting position:");
scanf("%d",&f);
printf("Enter the last position");
scanf("%d",&l);
for (i=f;i<=l;i++)
{
	c=0;
	for (j=2;j<i;j++)
	{
	if (i%j==0)
	{
	c=1;
	break;
	}
	}
if (c==0)
printf("prime number :--->%d\n",i);
}
getch();
}