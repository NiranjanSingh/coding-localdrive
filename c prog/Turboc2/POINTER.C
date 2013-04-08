#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
int *p,i;
for (i=1;i>0;i=i+10000)
{
p=malloc(i);
printf("%d %p",*p p);
if (!p)
break;
}
printf("no more memory");
getch();
}