/*Program for BIOS routine reebooting of computer !!!!*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
main()
{
union REGS inregs,outregs;
int j;
printf("Press any key to reeboot ....");
scanf("%d",&j);
int86(25,&inregs,&outregs);
printf("Completed");
getch();
}