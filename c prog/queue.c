#include<stdio.h>
#define max 10
int main()
{
int que[max],rear=-1,i,c;
while(1)
{
	printf("\nEnter your choice :\n1. Push\n2. Pop\n3. View\n4. Exit\n");
	scanf("%d",&c);
	
	switch(c)
	{
	case 1:
	{
	if(rear==max-1) printf("\nQueue is full");
	else
	{
	printf("\nEnter the element : ");
	scanf("%d",&que[++rear]);
	}
	break;
	}
	case 2:
	{
	if(rear==-1) printf("\nQueue is empty");
	else
	{
	printf("\nElement popped out is : %d \n",que[0]);
	rear--;
	if(rear!=-1)
	for(i=0;i<=rear;i++) que[i]=que[i+1];
	}
	break;
	}
	case 3:
	{
	printf("\nElements are :\n");
	for(i=0;i<=rear;i++) printf("%d\n",que[i]);
	break;
	}
	case 4:
	return 0;
	}
}
}
	
	
