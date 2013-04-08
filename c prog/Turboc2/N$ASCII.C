#include<conio.h>
main()
{
int i;
char s;
clrscr();
start:
printf("enter any number");
scanf("%d",&i);
s = (char)i;
printf(" This is the Ascii Value of  %c\n\n",s);
goto start;
getch();
}