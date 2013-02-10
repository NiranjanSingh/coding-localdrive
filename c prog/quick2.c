#include<stdio.h>
#include<stdlib.h>
int n,pivot;
int c=0;
void quick(int *arr,int left,int right)
{

	int i,j;
	int x,y;
	i=left;
	j=right;

	if(pivot == 1)
	x=arr[right];
	else if(pivot == 2)
	x=arr[(left + right)/2];
	else
	x=arr[(rand() % ((right-left)+1))+left];


do
{
	while((arr[i] < x) && (i<right)) { i++; c++;}
	while((x<arr[j]) && (j>left)) {j--; c++;}
	
	if(i<=j) 
	{
		y= arr[i];
		arr[i] = arr[j];
		arr[j] = y;
		i++;j--;
	}
}while(i<=j);
	
//for displaying every iteration 
	int k;
	printf("\n");
for (k=0;k<n;k++) printf(" %d ",arr[k]);
 
//checking and recursively calling function
	if(left < j) quick(arr,left,j);
	if(i< right) quick(arr,i,right);
}

int main()
{
	int i=0;
	
	
	//	printf("\nEnter size of array : ");
	//	scanf("%d",&n);
	
	n=10;
		int arr[n];
		int array[n];
		for(i=0;i<n;i++) scanf("%d",&arr[i]);
	        
		
                
		for(i=0;i<n;i++) array[i] = arr[i];
		printf("\n\nTaking first element as pivot element .");
		pivot = 1;
		c=0;
		quick(arr,0,n-1);
		printf("\nThe sorted array is : \n");
		for(i=0;i<n;i++) printf(" %d ",arr[i]);
		printf("\n Number of comparisons : %d\n",c);
		printf("\n\n");

		for(i=0;i<n;i++) arr[i] = array[i];
                printf("\n\nTaking midle element as pivot element .");
                pivot = 2;
		c=0;
                quick(arr,0,n-1);
                printf("\nThe sorted array is : \n");
                for(i=0;i<n;i++) printf(" %d ",arr[i]);
                printf("\n\n");
		printf("\n Number of comparisons : %d\n",c);


		for(i=0;i<n;i++) arr[i] = array[i];
                printf("\n\nTaking random element as pivot element .");
                pivot = 3;
		c=0;
                quick(arr,0,n-1);
                printf("\nThe sorted array is : \n");
                for(i=0;i<n;i++) printf(" %d ",arr[i]);
                printf("\n\n");
		printf("\n Number of comparisons : %d\n",c);


	
	return 0;
}
