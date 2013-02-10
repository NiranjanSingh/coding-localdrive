#include<stdio.h>
#include<stdlib.h>
//#define RAND_MAX 5
main()
{
int n,i=0;
//randomize();
scanf("%d",&n);
while(i++<10) printf("%d ",rand() % n);
}
