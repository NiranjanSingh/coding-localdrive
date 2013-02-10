#include<stdio.h>
int c=0;
void q_sort(int *arr,int p,int r)
{
	int q;
	if (p < r)
	{
	q = part(arr,p,r);
	q_sort(arr,p,q-1);
	q_sort(arr,q+1,r);
	}
}

int part(int *arr,int p,int r)
{
	int x=arr[r],i,j;
	i=p-1;
	int k=0;
	int temp;
	for (j=p;j<r;j++)
	{
	c++;
		if (arr[j] <= x)
		{
		i++;
		temp= arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		}
	}

	temp = arr[i+1];
	arr[i+1] = arr[r];
	arr[r] = temp;
printf("\n");
for(k=0;k<5;k++) printf("%d ",arr[k]);
return (i+1);

}	

void main()
{
int n,i;
printf("\nPrint element size : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++) scanf("%d",&arr[i]);
q_sort(arr,0,n-1);
for(i=0;i<n;i++) printf("\n %d",arr[i]);
printf("\nNumber of comparisons : %d \n",c);

}
