#include<stdio.h>
#include<stdlib.h>

void PrintM(int **arr,int f,int l,int clk)
{

main()
{
int **arr;
int n,i,j;
printf("\nEnter the value of n : ");
scanf("%d",&n);
arr = (int **) (malloc(n * sizeof(int)));
for(i=0;i<n;i++)
arr[i] = (int *) (malloc(n * sizeof(int)));

for(i=0;i<n;i++)
for(j=0;j<n;j++) 
	scanf("%d",&arr[i][j]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++) printf("%d\t",arr[i][j]);
printf("\n");
}

PrintM(arr,0,n,1);
}
