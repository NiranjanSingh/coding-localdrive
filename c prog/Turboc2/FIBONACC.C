#include<stdio.h>
#include<conio.h>
#include<dos.h>
main()
{
  int n,m,a,b,c,i=0;
  clrscr();
  printf("ENTER NUMBER TO START: ");
  scanf("%d",&n);
  printf("NO. OF ELEMENT TILL YOU WANT: ");
  scanf("%d",&m);
  a=0;
  b=n;
  while(i<m)
 {
  c=a+b;
  a=b;
  b=c;
  i=i+1;
  textcolor(i);
  cprintf("  %d",c);
  sound(510);
  delay(300);
 }
  getch();
  }