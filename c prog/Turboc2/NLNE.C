#include<stdio.h>
#include<conio.h>
#include<dos.h>
int n= 5;
main()
{
int i,c,j;
clrscr();
c=1;
while(getch()!='q')
{
clrscr();
printf("\n\n\n\n");
for(i=1;i<n;i++)
{
if(i==1)
{
printf("\n\t\t\t\t\t");
for(j=1;j<n;j++) printf("--------");
printf("\n");
}
for(j=1;j<n;j++)
{
	if(j==1) printf("\t\t\t\t\t|");
	if(c<10)
	printf("    %d   |",c++);
	else
	printf("   %d   |",c++);
}
printf("\n\t\t\t\t\t");
for(j=1;j<n;j++)
printf("--------");
printf("\n\n");
}
sleep(1);
}
getch();
}