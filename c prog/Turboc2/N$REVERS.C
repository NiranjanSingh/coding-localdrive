#include <conio.h>
#include <stdio.h>
main()
{
int i,r;
char s[80];
clrscr();
printf("Enter any text");
for (i=0;(s[i]=getchar()) != '\n';++i)
;
r=i;
for (r=i;r>=0;r--)
putchar(s[r]);
printf("\n There are %d number of characters:",i);
getchar();
}