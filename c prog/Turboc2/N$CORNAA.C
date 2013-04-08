#include<stdio.h>
#include<conio.h>
main()
{
int x,y;
char s[30];
clrscr();
printf("Enter any string ");
gets(s);
printf("enter coordinates : x,y : ");
scanf("%d,%d",&x,&y);
clrscr();
gotoxy(x,y);
puts(s);
getch();
}