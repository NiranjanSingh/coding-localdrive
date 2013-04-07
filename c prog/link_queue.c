#include<stdio.h>
#include<stdlib.h>
int Equeue(int );
void Dqueue();
int display();

struct node
{
    int data;
    struct node *next;
} *front, *rear;

int main()
{
    int ch, n;
    rear = NULL;
    front = NULL;
    while (1)
    {   printf("\n");
          printf("1:   INSERT\n");
          printf("2:   DELETE\n");
       	  printf("3:   DISPLAY\n");
	  printf("4:   EXIT\n");
          printf("     Enter Choice : ");               
          scanf("%d",&ch);
        switch (ch)
        {
            case 1:
   	         printf("Enter the element value : ");
        	 scanf("%d", &n);
           	 Equeue(n);
         	 break;
            case 2:
            	Dqueue();
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
int Equeue(int x)
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;
    if (rear == NULL || front == NULL)
    front = p;
    else
    rear->next = p;
    rear = p;
 return 0;
}


void Dqueue()
{
    struct node *p;
    int x;
    if (front == NULL || rear == NULL)
    {
        printf("\nQueue is empty");
         return ;
    }
    else
    {
        p = front;
        x = p->data;
        front = front->next;
        free(p);
    }
    printf("\nThe deleted element is %d : ",x);
}

int display()
{
    struct node *s;
    s = front;
    while (front == NULL || rear == NULL)
    {
        printf("\nQueue is empty");
        return;
    }
   printf("lqueue is :");
    while (s != NULL)
    {
        printf(" %d ", s->data);
        s = s->next;
    }
    printf("\n");
return 0;
}
