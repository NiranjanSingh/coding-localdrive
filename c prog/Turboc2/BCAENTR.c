#include<stdio.h>
main()
{
char name,dob;
char fname,h;
clrscr();
printf("NAME               ");
scanf("%s",name);
printf("\nDATE OF BIRTH      ");
scanf("%s",dob);
printf("\nFATHER'S NAME      ");
scanf("%s",fname);
scanf("%s",h);
printf("%s %s",name,h);
getch();
}