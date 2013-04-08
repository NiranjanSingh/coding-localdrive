/*Program for BIOS routine reebooting of computer !!!!*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
main()
{
union REGS inregs,outregs;
long int mem;
clrscr();
inregs.h.ah=88;
int86(21,&inregs,&outregs);
mem=outregs.x.ax;
printf("Completed memory size is %ld",mem);
getch();
}