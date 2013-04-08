/*this program is to print the data of a file in vdu*/
#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp;
char f[12],s[100],c;
start:
clrscr();
printf("\nEnter the file name which you want to view : ");
scanf("%s",f);
fp=fopen(f,"r");
	if (fp==NULL)
	{
	printf("Cannot open file ");
	sleep(1);
	exit();
	}
while (fgets(s,99,fp)!=NULL)
printf("%s",s);
fclose(fp);
printf("\n\nDo you want it again Y/N: ");
c=getche();
if (c=='y'|| c=='y')
goto start;
else
getch();
}df dfa dfsa