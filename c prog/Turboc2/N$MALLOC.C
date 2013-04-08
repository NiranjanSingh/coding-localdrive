/*use of function 'malloc'
 and user entry of size of
  array dynamic declaration*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int *a,n,i;
clrscr();
printf("enter how m an y");
scanf("%d",&n);
a=(int *) malloc(n * sizeof(int));
printf("\nenter strings\n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("\n %d",a[i]);
getch();
}