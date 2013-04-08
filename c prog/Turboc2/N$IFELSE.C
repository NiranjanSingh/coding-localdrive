#include<conio.h>
main()
{
long int a,i,d,f,t;
char n;
clrscr();
printf("enter fare amount");
scanf("%ld",&f);
printf("enter your age ");
scanf("%ld",&a);
printf("enter your income");
scanf("%ld",&i);
printf("enter your nationality indian i/o other");
scanf("%s",&n);
if ( n == 'i')
{
	if ( a > 60 || a==60)
	{
		if ( i > 500000)
		{
		d=30;
		}
		else
		{
		d=50;
		}
	}
	else
	{
	d=20;
	}
}
else
{
d=5;
}
t= f - ( f * d / 100 );
printf("you have to pay %ld",t);
getch();
}
