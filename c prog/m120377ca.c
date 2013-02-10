//program to implement bubble sort , insertion sort and binary search
// and merge sort, linear search
#include<stdio.h>
int size;
int count;
void store(int *a)
{
int i;
int s;
s=size;
printf("Enter the elements to store : ");
for(i=0;i<s;i++)
scanf("%d",&a[i]);
}

void I_sort(int *a)
{
int i,j,k,t;
int s,count=0;
s=size;
for (i=1;i<s;i++)
{
	t=a[i];
	j=i-1;
	while(j>=0 && a[j]>t)
	{
	count++;
	a[j+1]=a[j];
	j=j-1;
	}
	a[j+1]=t;
}

printf("\nSorted array is : ");
for(i=0;i<s;i++) printf("%d  ",a[i]);
printf("\n");
printf("\nNumber of comparisons in insertion sort is : %d.\n",count);
}

void B_sort(int *a)
{
int s,count=0;
int i,j,t;
s=size;
for(i=0;i<s;i++)
{

	for(j=0;j<s-i-1;j++)
	{
	count++;
	t=a[j];
	if (a[j]>a[j+1])
	{
	a[j]=a[j+1];
	a[j+1]=t;
	
	}
	}
}
printf("\nSorted array is : ");
for(i=0;i<s;i++) printf("%d ",a[i]);
printf("\n");
printf("\nNumber of comparisons in bubble sort is : %d.\n",count);
}


void B_search(int *a)
{
	int key,mid,lb,ub,s,flag,pos;
	int count=0;
	s=size;
	lb=0;
	ub=s-1;
	printf("\nEnter the element to search : ");
	scanf("%d",&key);

	while(lb<=ub)
	{
	count++;
	mid = (lb+ub)/2;
	
	if(key>a[mid])
		lb=mid+1;
	else if(key<a[mid])
		ub=mid-1;
	else
		{
		pos=mid;
		flag=1;
		break;
		}
	}

if(flag!=1) printf("\nElement %d not found.\n",key);
else printf("\nElement %d found at %d.\n",key,pos);
printf("\nNumber of comparisons in binary search : %d.\n",count);
}



int Merge(int *arr,int low,int mid,int high)
{
int i,m,k,l,temp[size];
count=0;
    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high))
	{
	
	count++;
         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }
    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
	}
return count;
}


void  M_sort(int *a,int p,int r)
{
int q;
if (p<r)
{

	q=(p+r)/2;
	M_sort(a,p,q);
	M_sort(a,q+1,r);
	count+=Merge(a,p,q,r);
	
}

}

void show(int *a)
{
int i;
printf("\nArray is : ");
for(i=0;i<size;i++) printf("%d  ",a[i]);
printf("\n");

}

void L_search(int *a)
{
int key,i,count=0;
printf("Enter the element to search : ");
scanf("%d",&key);
for(i=0;i<size;i++)
{
	count++;
	if(a[i]==key) 
	{
	printf("\n%d found at %d position.\n",key,i+1);
	break;
	}

}
if(i==size) printf("\n%d not found.\n",key+1);
printf("\nNumber of comparisons in linear search is : %d.\n",count);

}


int main()
{
int c;
printf("\n\nWELCOME TO THE WORLD OF SORTING AND SEARCHING. ENTER THE SIZE OF ARRAY THEN CHOOSE WHICH ALGORITHM THEN GIVE THE INPUT AND YOU WILL GET THE DESIRED OUPUT.\n\n\n");
while(1)
{
	printf("\nEnter the size of array : ");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter what you have to do : \n\n\t1. Bubble_Sort \t2. Insertion_Sort \t3. Binary_Search \t4. Merge_Sort \t5. Linear_Search \n ");
	scanf("%d",&c);
switch(c)
{
case 1:
	store(arr);
	B_sort(arr);
	break;
case 2:
	store(arr);
	I_sort(arr);
	break;
case 3:
	store(arr);
	I_sort(arr);
	show(arr);
	B_search(arr);
	break;
case 4:
	store(arr);
	count=0;
	M_sort(arr,0,size-1);
	printf("\nNumber of comparisons in Merge sort is : %d.\n",count);
	show(arr);
	break;
case 5:
	store(arr);
	show(arr);
	L_search(arr);
	break;
default: 
	return 0;
}
}
return 0;
}
