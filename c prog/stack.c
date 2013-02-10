#include<stdio.h>
#define max 10
int main()
{
int i=-1,stk[max],c,j;
while (1)
{
printf("Choose what you have to do :\n1. Push\n2. Pop\n3. View\n4. Exit\n");
scanf("%d",&c);
switch(c)
{
case 1:{
if(i==max-1) printf("Stack full ");
else
{
printf("\nEnter the value of the element :");
scanf("%d",&stk[++i]);
}
break;
}

case 2:{
if (i<0) printf("Stack empty");
else
printf("\nThe element is : %d",stk[i--]);
break;
}

case 3:{
printf("\nThe stack element is : \n");
for(j=0;j<=i;j++) printf("%d\n",stk[j]);
break;
}

default:
return 0;
}
}
}
