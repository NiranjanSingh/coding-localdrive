/*this is a program to add records used fflush and fprintf see fflush at pg-348 let us c*/
#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp;
char f[12],f1[25],f2[12],f3[20],a='y';
clrscr();
printf("Enter the file in which you want to add records");
scanf("%s",f);
fp=fopen(f,"a");
if (fp==NULL)
{
puts("Cannot open file");
sleep(1);
exit();
}
while (a=='y' || a=='Y')
{
printf("\nEnter the first field ");
gets(f1);
printf("\nEnter the second field ");
gets(f2);
printf("\nEnter the third field ");
gets(f3);
fprintf(fp,"%s %s %s\n",f1,f2,f3);
printf("\nAnother record y/n");
fflush(stdin);
a=getche();
}
fclose(fp);
getch();
}



