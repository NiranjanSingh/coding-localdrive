#include<stdio.h>
int main()
{
int t,n,s=2;
scanf("%d",&t);
while (t-->0)
{
scanf("%d",&n);
s=2;
while(1)
{
if(n/s<=0) break;
else 
s*=2;
}
printf("%d\n",s/2);
}
return 0;
}
