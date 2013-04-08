#include<conio.h>
int sum(int a,int b)
{
	int z;
	z=a+b;
	return(z);
}
main()
{
int a,b,z;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
z = sum(a,b);
printf("sum = %d",z);
getch();
}
