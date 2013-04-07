#include<stdio.h>
#include<stdlib.h>

struct node {
int info;
struct node *left;
struct node *right;
};
typedef struct node tree;
tree *root=NULL;

//root->left = NULL;
//root->right = NULL;

void insert() {
int info;
printf("Enter the value of the node : ");
scanf("%d",&info);

if (root==NULL) {
	root = (tree *) malloc(sizeof(tree));
	root->info = info;
	root->left=NULL;
	root->right=NULL;
 	return;
	}

tree *temp;

temp=root;

while(1) {
if (temp->info < info) {
	if (temp->right==NULL)
	{
	tree *new;
	new = (tree *) malloc(sizeof(tree));
	temp->right=new;
	new->info = info;
	new->left= NULL;
	new->right=NULL;
	break;
	}
	else
	temp=temp->right;
}	
else if (temp->info > info) {
	if (temp->left==NULL)
	{
	tree *new;
	new = (tree *) malloc(sizeof(tree));
	temp->left=new;
	new->info = info;
	new->left= NULL;
	new->right=NULL;
	break;
	}
	else
	temp=temp->left;
}	
else {
	printf("\n%d Value already exist .",info);
	return;
     }
}
}

tree *max(tree *root) {
if (root== NULL)
	return NULL;
else if(root->right == NULL)
	return root;
else return max(root->right);
}

tree *delete(tree *temp,int data)
 {
  tree *temp1,*temp2;
   if(!temp)
   {
    printf("\n Element not present in the Binary  ");
    return(temp);
   }
   else
    {
	if(temp->info < data)
     	temp->right = delete(temp->right,data);
        else if (temp->info > data)
      		{
       		temp->left=delete(temp->left,data);
       		return temp;
      		}
        else                    
        {
		if(temp->info == data)    
		{
 		if(temp->left == temp->right) 
  		{
   			free(temp);
   			return(NULL);
  		}
 		else 
		if(temp->left==NULL)  
		{
  		temp1=temp->right;
 		free(temp);
 		return temp1;
		}
		else if(temp->right==NULL)   
		{
		temp1=temp->left;
		free(temp);
		return temp1;
		}
		else
		{
 		temp1=temp->right;
 		temp2=temp->right;
		while(temp1->left != NULL)
   		temp1=temp1->left;
		temp1->left=temp->left;
		free(temp);
		return temp2;
		}
		}		
	}
    }
return(temp);
}
	
/*void del(int info)
{
tree *temp,*temp1;
temp=root;
while(temp) {
temp1= temp;
if (temp->info > info) temp = temp->left;
else if(temp->info < info) temp = temp->right;
else if(temp->info == info) {
	if (temp->left != NULL && temp->right != NULL) {
	temp1 = max(temp->left);
	temp->info = temp1->info;
	del(temp1->info);
	//if(temp1->left!=NULL) {
	//	temp1->right = temp1->right->left;
		//temp1->left =temp->left->left;
		//free(temp1->left);
	//	}
	//else  { temp1 = NULL; free(temp1); }
	}

	else if (temp->left == NULL && temp->right == NULL) { temp=NULL; free(temp); }
	else if (temp->left != NULL && temp->right == NULL) {
	if (temp1->left == temp)
	temp1->left = temp->left;
	else if(temp1->right == temp)
	temp1->right = temp->left;
	//temp->left = NULL;
	//free(temp1->left);
	}
	else if (temp->left == NULL && temp->right != NULL) {
	if (temp1->left == temp)
	temp1->left = temp->right;
	else if(temp1->right == temp)
	temp1->right = temp->right;
	
	//temp->info = temp->right->info;
	//temp->right = NULL;
	//free(temp1->right);
	}
return;
}
}
printf("\nElement not present. ");
}*/



tree *search(tree *root,int info) {
if (root == NULL) return NULL;
if (root->info == info) return root;
if (root->info > info) return search(root->left,info);
if (root->info < info) return search(root->right,info);
}


void show(tree *temp) {
if (temp) { 
show(temp->left);
printf("\t%d",temp->info);
show(temp->right);
}
}

void main() {
int ch;
int info;
while(1) {
printf("\nEnter your choice : 0.Display 1.Insert 2.Delete 3.Search 4.Exit -----> ");
scanf("%d",&ch);

switch(ch) {
case 0:
show(root);
break;
case 1:
insert();
break;
case 2:
printf("\nEnter element you want to delete : ");
scanf("%d",&info);
root = delete(root,info);
show(root);
break;
case 3:
printf("\nEnter element you want to search : ");
scanf("%d",&info);
if (search(root,info))
printf("\n%d element found. ",info);
else
printf("\n%d element not in the binary search tree .",info);
break;
case 4:
return;
}
}
}


