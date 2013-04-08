#include<stdio.h>
#include<conio.h>
#define max 5

void display(int *);
void insert(int *,int ,int);
void del(int *,int);

main()
{
int arr[5];
clrscr();

insert(arr,1,11);
insert(arr,2,12);
insert(arr,3,13);
insert(arr,4,14);
insert(arr,5,15);
printf("\n After inserting array element:\n ");
display(arr);

del(arr,5);
display(arr);
del(arr,2);
printf("\n After Deletion array element:\n ");
display(arr);
insert(arr,2,555);
insert(arr,5,999);
printf("\n After inserting two element array element:\n ");
display(arr);

getch();
}
void display(int *arr)
	{
	int i;
	for(i=0;i<max;i++)
	printf("\t %d",arr[i]);
	}
void insert(int *arr,int pos,int num)
	{
	int i;
	for(i=max-1;i>=pos;i--)
	arr[i]=arr[i-1];
	arr[i]=num;
	}
void del(int *arr,int pos)
	{
	int i;
	for(i=pos;i<max;i++)
	arr[i-1]=arr[i];
	arr[i-1]=0;
	}
