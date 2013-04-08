#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  int x,y,z,i=0,n;
  x=0;
  y=1;
  clrscr();
  printf("enter the value of n");
  scanf("%d",&n);
  for(i>0;i<n;i++)
  {

     z=x;
     y=z;
     z=x+y;
     printf("%d",z);
   }
   getch();
   }