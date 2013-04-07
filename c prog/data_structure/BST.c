#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left;
    struct node *right;
};

//for inserting an element
struct node *insert(struct node *root,int value) {
if (root == NULL){
    struct node *p=NULL;
    p = (struct node *) malloc(sizeof(struct node));
    p->key=value;
    p->left=NULL;
    p->right=NULL;
    return p;
}
else if(root->key > value) {
    root->left = insert(root->left,value);
    return root;
}
else if(root->key < value) {
    root->right = insert(root->right,value);
    return root;
}
else {
    printf("\nRepetition of key is not allowed .");
    return root;
}
}

struct node *succesor(struct node *t) {
    if (t == NULL)
        return NULL;
    else if(t->left == NULL)
        return t;
    else
        return succesor(t->left);
}    

//for deleting an element from the tree
struct node *delete(struct node *root,int value) {

    if (root=NULL)
        return NULL;
    else if(value < root->key) {
        root->left = delete(root->left,value); //for updating the left child address of parent we have assigned the returned tree in root->left
        return root;
    }
    else if(value > root->key) {
        root->right = delete(root->right,value);
        return root;
    }
    else {
    
        if (root->left == NULL && root->right == NULL) {
             free(root);
             return NULL;
         }
         else if(root->left == NULL || root->right ==NULL) {
            struct node *tmp = root;
            if(root->left == NULL) 
                root=root->right;
            else if(root->right == NULL)
                root=root->left;
            free(tmp);
            return root;
         }
         else {
            struct node *p=succesor(root->right);
            root->key = p->key;
            root->right = delete(root->right,p->key);
            return root;
         }
    }
}    
                

//function to display binary search tree inorder
void inorder(struct node *root) {
    if(root!=NULL) {
        inorder(root->left);
        printf("\t%d",root->key);
        inorder(root->right);
    }
}



int main() {
    struct node *root;
    root = NULL;

    int c;
    int value,info;
    do {
    printf("\nEnter your choice : 0.Insert\t1:Delete");
    scanf("%d",&c);
    switch(c) {
//for inserting element in queue
    case 0:
        printf("\nEnter the element to be inserted : ");
        scanf("%d",&value);
        root = insert(root,value);
        inorder(root);
        break;
    case 1:
        printf("\nEnter the element to delete : ");
        scanf("%d",&info);
        printf("Entreting ");
        root = delete(root,info);
        inorder(root);
        break;
        
    }
    }while(c<5);

return 0;
}    


