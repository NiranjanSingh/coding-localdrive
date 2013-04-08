#include <stdio.h>
#include <conio.h>
typedef struct{
		char name[25];
		int rollno;
	      }class1;
class1 class;
void fucn(class1 class);
main()
{
printf("Enter your name");
scanf("%[^\n]",class.name);
printf("Enter your roll number");
scanf("%d",&class.rollno);
fucn(class);
getch();
}
void fucn(class1 class)
{
printf("\n\n goodmorning %s",class.name);
printf("\n\n you roll number is %d",class.rollno);
}

