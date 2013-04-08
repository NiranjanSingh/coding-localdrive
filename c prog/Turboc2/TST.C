#include<stdio.h>
main()
{
char ch='\0';
while(ch!='q')
{
ch=getch();
printf(" %d",ch);
}
}