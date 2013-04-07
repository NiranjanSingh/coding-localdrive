#include<stdio.h>

void fun(int i)
{
if(i==10) 
return;
printf("%d", i);
i++;
fun(i);
}

void main()
{
fun(0);
}
