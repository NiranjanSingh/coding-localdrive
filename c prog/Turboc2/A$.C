#include<stdio.h>
main()
{
int marks;
printf("enter marks ");
scanf("%d",& marks);
if(marks<=50)
printf("grade d");
else if(marks<=60)
printf("grade c");
else if(marks<=75)
printf("grad b");
else
printf("grad a");
getch();
}