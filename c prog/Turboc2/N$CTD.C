#include<conio.h>
#include<stdio.h>
main()
{
int h=0,m=0,s=0;
clrscr();
printf("Enter hour : ");
scanf("%d",&h);
printf("\nEnter minutes : ");
scanf("%d",&m);
printf("\nEnter seconds : ");
scanf("%d",&s);
for (h=h;h>=0;h--)
{
clrscr();
	for (m=m;m>=0;m--)
	{
	clrscr();
		for (s=s;s>=0;s--)
		{
			gotoxy(70,1);
			sleep(1);
			printf("%d : %d : %d ",h,m,s);
		}
		if (s==0 && m==0 && h==0)
		goto exit;
		s=59;
	}
	m=59;
}
exit:
printf("\n ......Time over boss......\n\n \a Made by niranjan.");
getch();
}