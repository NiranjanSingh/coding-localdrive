#include<stdio.h>
#include<stdlib.h>


struct sll
{
int info;
struct sll *next;
};

struct sll *start;
struct sll *last;


void store(struct sll *new,struct sll **start,struct sll **last)
{
struct sll *tmp;
if(*last == NULL)
{
	new->next = NULL;
	*start = new;
	*last = new;
	return;
}

tmp = *last;
tmp->next = new;
new->next=NULL;
*last = new;
}

void display(struct sll **start)
{
struct sll *p;
p = *start;
while(p)
{
printf("Value: %d", p->info);
p=p->next;
}
}

void Insert()
{
struct sll *new;

new = (struct sll *)malloc(sizeof(struct sll));

printf("\nEnter the value : ");
scanf("%d",&(new->info));

store(new,&start,&last);
}


main()
{
int c;
c=1;
while(c<2)
{
	printf("Enter your choice: \n \t 1 --> Enter \n");
	scanf("%d",&c);
	start = last = NULL;
	switch(c)
	{
	case 1:
		Insert();
		break;
	}
}
display(&start);
}

