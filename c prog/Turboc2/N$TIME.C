#include<stdio.h>
#include<conio.h>
main()
{
int h,m,s,ms;
clrscr();
for (h=0;h<=12;h++)
{
	for (m=0;m<60;m++)
	{
		for (s=0;s<60;s++)
		{
			for (ms=0;ms<4500;ms++)
			{
			delay(1);
			gotoxy(32,12);
			printf("%d : %d : %d : %d",h,m,s,ms);
			}
		clrscr();
		}
	clrscr();
	}
clrscr();
}
getch();
}
