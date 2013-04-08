#include<conio.h>
main()
{
int r,n,b=0,i=1;
scanf("%d",&n);
while (n>0){
r=n%2;
b=(b*i)+r;
n=n/2;
i=i*10;
}
printf("\n\n %d ",b);
getch();
}