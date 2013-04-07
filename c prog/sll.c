#include<stdio.h>
#include<stdlib.h>

struct sll
{
int info;
struct sll *next;
};

struct sll *first=NULL,*last=NULL,*tmp;

void view()
{
tmp=first;
if (first == NULL)
{
        printf("\nNo element to display . \n");
        return;
}
printf("\n\t\t\t\t");
while(tmp!=NULL)
{
printf("\t%d",tmp->info);
tmp=tmp->next;
}
}


//for insertion
void Insert()
{
tmp = (struct sll *) malloc(sizeof(struct sll));
printf("\n Enter the value : ");
scanf("%d",&tmp->info);
if(first == NULL)
{
        first=tmp;
        last=tmp;
        tmp->next = NULL;
}
else


{
tmp->next = first;
first = tmp;
}
}


//for deleting particular key element
void delete()
{
int key,chk=0;;
int c=1;
if(first == NULL)
{
printf("\nNo element to delete  .\n");
return;
}

struct sll *old;
printf("\nEnter the key element : ");
scanf("%d",&key);

tmp=first;
old = first;
while(tmp!=NULL)
{
        if (tmp->info == key)
        {
        chk=1;
        printf("\n%d found at %d location. \n",tmp->info,c);
        if(tmp==first)
        {
                 first = tmp->next;
        //       return;
        }
        old->next = tmp->next;
//      return;
        }
        c++;
        old=tmp;


        tmp=tmp->next;
}
if(chk==0)
printf("\n%d Not found .\n",key);
}

//for popping out of stack that is first element 
void pop()
{
	if(first == NULL) printf("\nNo element to pop.\n");
	else	first = first->next;
}

//For inserting element in queue 
void qIns()
{
	tmp = (struct sll *) malloc(sizeof(struct sll));
	printf("\nEnter the value of the element : ");
	scanf("%d",&tmp->info);
	if(first==NULL)
	{
	first = tmp;
	last = tmp;
	tmp->next =  NULL;
	return;
	}

	last->next = tmp;
	last = tmp;
	tmp->next = NULL;
}
	

void main()
{
int c=0;
while(c<10)
{
printf("\n\n\nEnter your choice : \n1  : Insert\t2 : Delete\t3 : Display\n\n4  :  Stack-Push\t5  : Stack-Pop \t6 : Stack-view\n\n7 : Queue-Insert\t8 : Queue-Delete\t9 : Quiue-View\n\n");
scanf("%d",&c);

switch(c)
{
case 1:
case 4:
        Insert();
        view();
        break;
case 2:
        delete();
        view();
        break;
case 3:
case 6:
case 9:
        view();
        break;
case 5:
case 8:
	pop();
	view();
	break;
case 7:
	qIns();
	view();
	break;
}
}

}

