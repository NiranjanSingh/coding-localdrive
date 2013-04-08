/*This program illustates redirecting the output see 376 of let us c*/
#include<stdio.h>
main()
{
char ch;
while ((ch=getc(stdin))!=EOF)
putc(ch,stdout);
}