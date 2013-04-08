#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
int i,j;
	char ***m;
	char *a[25] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25"};

	int n=4,c;
	m=(char ***) malloc(n*sizeof(char));
	*m=(char **) malloc(n*sizeof(char));
	**m=(char *) malloc(n*sizeof(char));

/*for initialisation but cant able to convert thats why
initialising by writing if else */
/*	count=1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		m[i][j]=count++;
*/

/*this doesnot worked thats y another idea .
if(n==5)
*m[5][5] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};
*/

	c=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
		if(i==n-1 && j==n-1)
		m[i][j]=" ";
		else
		m[i][j]=a[c++];
		}
	}

	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	printf("%d\t",m[i][j]);
	printf("\n");
	}

getch();
}




