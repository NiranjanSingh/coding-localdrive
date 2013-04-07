#include<stdio.h>
#include<stdlib.h>
int push();
int pop();
int display();

typedef struct node
{
 int data;
 struct node *next;
}new;
new *top=NULL;

int main()
{  int ch;   
     while(1)
	{
          printf("\n");
          printf(" 1:   PUSH\n");
          printf(" 2:   POS\n");
       	  printf(" 3:   DISPLAY\n");
	  printf(" 4:   EXIT\n");
          printf("      Enter Choice: ");               
          scanf("%d",&ch);

       	switch(ch)
	{
	case 1:
		push();
		break;
	case 2:
		pop();
		break;
	case 3:
		display();
		break;
	case 4:
		exit(0);
	default:
		printf("Invalid choice\n");
		break;
	}
      }

return 0;
}


int push()
{
	int x;
	new *temp;
	printf("Enter the element\n");
	scanf("%d",&x);
	temp=(new*)malloc(sizeof(new));
	temp->data=x;
	temp->next=top;
	top=temp;
return 0;
}

int pop()
{
	new *temp;
	if(top==NULL)
	printf("Stack is empty\n");
	else
	{
	temp=top;
	printf("The  delete element is = %d\n",temp->data);
	free(temp);
	top=top->next;
	}
return 0;
}

int display()
{
	new *s;
	if(top==NULL)
	printf("Stack is empty\n");
	else
	{
	s=top;
	printf("The elements of the stack are :");
	while(s!=NULL)
	{
	printf("%d\t",s->data);
	s=s->next;
	}
	printf("\nTopmost element is = %d\n",top->data);
	}
return 0;
}
