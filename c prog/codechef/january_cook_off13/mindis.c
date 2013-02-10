#include<stdio.h>
int main()
{
int t,ds,dt,d;
scanf("%d",&t);
while(t-->0)
{
scanf("%d %d %d",&ds,&dt,&d);
if((ds+dt)>d) printf("%f",(float)0);
else printf("%f",(float)(d-(ds+dt)));
}
return 0;
}
