#include<stdio.h>
    int main()
    {
    int t,n;
    scanf("%d",&t);
    unsigned long long long int f;
    while(t-->0)
    {
    scanf("%d",&n);
    f=1;
    while(n>1)
    {
    f*=n;
    n--;
    }
    printf("%llu\n",f);
    }
    return 0;
   } 
