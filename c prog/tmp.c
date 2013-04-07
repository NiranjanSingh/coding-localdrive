#include<stdio.h>
#include<stdlib.h>
//#define RAND_MAX 5
main()
{
int n,i=0;
int *x;
x=&i;
printf("%p %p %d",x,&x,*x);
//randomize();
//scanf("%d",&n);
//while(i++<10) printf("%d ",rand() % n);
}
