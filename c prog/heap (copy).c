#include<stdio.h>
int n;
int count=0;
void M_heap(int *arr,int i)
{
if(i > ((n+1)/2)-1)
return;
 
int l;
	count++;
	if(2*i + 1 < n && arr[i] < arr[2*i +1])
	l=2*i +1;
	else
	l=i;
	
//	count++;
	if(2*i + 2 < n && arr[l] < arr[2*i +2])
	l=2*i + 2;


//swapping
//	count++;

	
	arr[i] = arr[i] + arr[l];
	arr[l] = arr[i] - arr[l];
	arr[i] = arr[i] - arr[l];
	M_heap(arr,l);
	
}

void M_sort(int *arr)
{
int i;

while(n>0)
{
for( i=0;i<n;i++) printf("%d\t",arr[i]);
printf("\n");
 
//count++;
if(n-1 != 0)
{
arr[0] = arr[0] + arr[n-1];
arr[n-1] = arr[0] - arr[n-1];
arr[0] = arr[0] - arr[n-1];
}

n--;

for(i=((n+1)/2)-1;i>=0;i--)
M_heap(arr,i);

}
//count++;
/*if(arr[1] < arr[0])
{
arr[0]= arr[0] + arr[1];;
arr[1] =arr[0] - arr[1];
arr[0] = arr[0] - arr[1];;
}*/
}


void main()
{
int i,s;

// taking array inputs

printf("\nEnter array size : ");
scanf("%d",&n);
int arr[n];
printf("\nEnter array elements : ");

for(i=0;i<n;i++)
scanf("%d",&arr[i]);
 
s=n;
 
//making heap tree
for(i=((n+1)/2)-1;i>=0;i--)
M_heap(arr,i);
M_sort(arr);


printf("\n");
for(i=0;i<s;i++) printf("%d\t",arr[i]);
printf("\nTotal number of comparisons : %d \n",count);
}

