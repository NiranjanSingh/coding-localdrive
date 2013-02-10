/***********************************************************
* This is to demonstrate how to use command line arguments *
***********************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,j;
	printf("\n");
	for	(i = 0;i<argc;i++)
	{
	j=0;
		while (*argv[j]!='T')
		printf("%c\n",argv[i][j++]);
	printf("\n");
	}
}
