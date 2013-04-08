#include <conio.h>
#include <stdio.h>
main()
{
int i,v=0,c=0,a=0,d=0,sp=0,o=0;
char s[300];
clrscr();
printf("Enter a paragraph to stop type '*' at the end .....");
for (i=0;(s[i]=getchar()) != '*';++i)
if (s[i] >= 'A'&& s[i] <= 'Z' || s[i] >= 'a' && s[i] <='z')
{
	a++;
	if (s[i]== 'a' || s[i]== 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
	v++;
	else
	c++;
}
else if(s[i] == ' ')
sp++;
else if(s[i] >= '1' && s[i] <= '9')
d++;
else
o++;
printf("\n\nAlphabet's : %d\n....vowels : %d\nconsonants : %d\nDigits     : %d\nSpaces     : %d\nOthers     : %d\n\nTotal Number Of characters  : %d \n\n\n\n......................Made By Niranjan................",a,v,c,d,sp,o,a+d+sp+o);
getch();
}