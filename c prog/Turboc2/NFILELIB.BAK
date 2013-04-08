#include<stdio.h>
#include<conio.h>
#include<string.h>
#define TRUE 1
typedef struct {
	int day;
	int month;
	int year;
	} date;
typedef struct {
	char nob[25];
	date now;
	date doi;
	date dor;
	} record;
record library;
record read(record library);
FILE *fpt;
main()
{
int f=TRUE;
clrscr();
fpt = fopen("library.dat","w");
printf("Enter today's date in this format (dd/mm/yy) : ");
scanf("%d/%d/%d",&library.now.day,
		 &library.now.month,
		 &library.now.year);
while (f)
{
	printf("\nwrite name of the book (write \' END \' when finished) : ");
	scanf(" %[^\n]",&library.nob);
	if (strcmp(library.nob,"END") == 0 )
	break;
	library=read(library);
	fwrite(&library , sizeof(record) , 1 , fpt);
	strset(library.nob,' ');

}
fclose(fpt);
getch();
}
record read(record library)
{

printf("\nwrite date of issue in this format (dd/mm/yyyy) : ");
scanf("%d/%d/%d",&library.doi.day,&library.doi.month,&library.doi.year);
	if (library.now.day!=library.doi.day)
	{
	printf("\nwrite date of return int this format (dd/mm/yyyy) : ");
	scanf("%d/%d/%d",&library.dor.day,&library.dor.month,&library.dor.year);
	}
return(library);
}

