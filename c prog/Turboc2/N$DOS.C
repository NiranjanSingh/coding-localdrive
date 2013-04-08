#include<conio.h>
#include<stdio.h>
main()
{
char s[12];
clrscr();
printf("Enter any dos command ");
gets(s);
system(s);
getch();
}