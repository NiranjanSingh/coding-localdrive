#include<stdio.h>
#include<conio.h>
main()
{
int x,term=1,sum=0,num=0,add;
clrscr();
x=term;
while(term<=2)
{
 sum=sum+term;
 term++;
    }
 while(x<term-1)
 {
 num=num+x;
   x++;
 add=sum+num;
   }
printf("%d",add);
getch();
}


