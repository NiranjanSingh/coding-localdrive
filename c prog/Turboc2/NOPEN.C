/*This program illustrates the use of getch(),getche(),getchar()*/
#include<stdio.h>
#include<conio.h>
main()
{
char a,b,c;
clrscr();
printf("Enter any character  >>>=======>");
a=getche();                   /*This echoes(we can see) character and stores also instantily*/
printf("\n%c",a);
printf("\n\nEnter any character  >>>=======>");
b=getch();                   /*This not echoes but stores instantily*/
printf("\n%c",b);
printf("\n\nEnter any character  >>>=======>");
c=getchar();                 /*This echoes but stores when enter key is pressed*/
printf("\n%c",c);
getch();
}