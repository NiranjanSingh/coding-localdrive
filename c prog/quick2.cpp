#include<iostream>
#include<stdlib.h>
using namespace std;

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
		while((arr[i] < x) && (i<right)) 
		{ 
			i++; 
			c++;
		}
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
	cout<<"\n";
	for(k=0;k<n;k++) 
	cout<<"  "<<arr[k]<<" ";
 
//checking and recursively calling function
	if(left < j) quick(arr,left,j);
	if(i< right) quick(arr,i,right);
}

int main()
{	
	int i=0;
		cout<<"\nenter the length of the array:  ";
		cin>>n;
		int arr[n];
		int array[n];
		cout<<endl<<"enter the eleme nt in the aaray:"<<endl;
		for(i=0;i<n;i++) 
			cin>>arr[i];
	        for(i=0;i<n;i++) 
			array[i] = arr[i];
		cout<<"\nTaking first element as pivot element .";
		pivot = 1;
		c=0;
		quick(arr,0,n-1);
		cout<<"\nThe sorted array is : \n";
		for(i=0;i<n;i++) 
			cout<<"  "<<arr[i];
		cout<<"\n Number of comparisons : \n"<<c;
		cout<<"\n\n";
		for(i=0;i<n;i++) 
			arr[i] = array[i];
                cout<<"\nTaking midle element as pivot element .";
                pivot = 2;
		c=0;
                quick(arr,0,n-1);
                cout<<"\nThe sorted array is : \n";
                for(i=0;i<n;i++) 
			cout<<"  "<<arr[i]<<"  ";
                cout<<"\n";
		cout<<"\n Number of comparisons : "<<c<<endl;
		for(i=0;i<n;i++) 
			arr[i] = array[i];
                cout<<"\nTaking random element as pivot element .";
                pivot = 3;
		c=0;
                quick(arr,0,n-1);
                cout<<"\nThe sorted array is : \n";
                for(i=0;i<n;i++) 
			cout<<"  "<<arr[i];
                cout<<endl<<endl;
		cout<<"\n Number of comparisons : "<<c<<"\n";


	
	return 0;
}
