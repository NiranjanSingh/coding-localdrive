/*Program for multiplication of two matrix*/
#include<stdio.h>
#include<conio.h>
#define arow 3
#define acol 3
#define brow 3
#define bcol 2
main()
{
int a[arow][acol],b[brow][bcol],c[arow][bcol],i,j,k;
clrscr();
if (acol==brow)
{
	printf("Enter elements of matrix A");
	for (i=0;i<arow;i++)
	{
	  for(j=0;j<acol;j++)
	   scanf(" %d",&a[i][j]);
	}
	printf("Enter elements of matrix B");
	for (i=0;i<brow;i++)
	{
	  for(j=0;j<bcol;j++)
	   scanf(" %d",&b[i][j]);
	}
	printf("The multiplication of A X B = C is \n ");
	for (i=0;i<arow;i++)
	{
	  for(j=0;j<bcol;j++)
	 {
	   c[i][j]=0;
	  for (k=0;k<acol;k++)
	   c[i][j] += a[i][k] * b[k][j];
	  printf("  %d",c[i][j]);
	 }
	  printf("\n");
	}
}
else 
printf("Wrong input");
getch();
}
