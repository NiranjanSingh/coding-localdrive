#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int i,n;
	int s=0,d=5;
	scanf("%llu",&i);
	while(i)
	{
	scanf("%llu",&n);
	do
	{
	s+=n/d;
	d*=5;
	}while(n/d >=1);
	printf("%d\n",s);
	s=0;
	d=5;
	i--;
	}
return 0;
}
