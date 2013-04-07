//Implement insert,delete and search functions in a hash table that takes elements as
//strings. The hash function is created using the division method. Resolve collisions
//using --> chaining --> open addressing linear,quadratic and double hashing. Display
//the probing sequence for each key

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


const int c= 128;

struct node {
  char *data;
  struct node *next;
};

//for calculating the length of a string
int length(char *str) {
  int l=0;
  for(l=0;str[l]!='\0';l++);
  return l-1;
}

//for calculating a power to the b
int power(int a,int b) {
  if (b==0) return 1;
  else
    return a * power(a,b-1);
}

//for calculating the indexing of s
int indexing(char *str) {
  int i=0,a,index=0;
  for (i=0;str[i]!='\0';i++) {
    a=(int)str[i]; // for computing the ascii value of a character
    index+=a*power(c,i);
  }
  return index;
}

struct node *chaining(struct node *arr,char *string) {
  int len;
  len = length(string);
  if (arr == NULL) {
    arr=(struct node *) malloc(sizeof(struct node));
    arr->data = (char *) malloc(len*sizeof(char));
    strcpy(arr->data,string);
    
  }
  else{
    struct node *temp;
    temp = arr;
    while(temp->next != NULL ) temp = temp->next;
    struct node *newt;
    newt = (struct node *) malloc(sizeof(struct node));
    temp->next = newt;
    newt->data = (char *) malloc(len * sizeof(char));
    strcpy(newt->data,string);
    newt->next = NULL;
    
  }
return arr;
}

struct node *delete(struct node *temp,char *string) {
  if (temp == NULL) {
    printf("\nNot found.");
    return NULL;
  }
  if(strcmp(temp->data,string)==0) 
    temp= temp->next;
  else
   temp = delete(temp->next,string);
return temp;
}

void search(struct node *temp,char *string) {
  while(temp!=NULL) {
    if(strcmp(temp->data,string)==0) {
      printf("\n%s found.",string);
      return;
    }
    temp=temp->next;
  }
printf("\n%s Not found.",string);
}
    

void display(struct node *temp,int i) {
    printf("\n");
    if (temp==NULL)
      printf("\t%d ----> Empty",i);
    else {
      while(temp!=NULL) {
          printf("\t%d ----> %s",i,temp->data);
          temp=temp->next;
      }
    }
  
}  

int main() {
  printf("hiii");
  int size,i,index,choice,key,tkey;
  printf("hiii");
  char string[50];
  printf("Enter the table size : ");
  //scanf("%d",size);
  size=5;
  struct node *arr[size];
  printf("hiii");
  for (i=0;i<size;i++) {
  printf("hhh");
    arr[i]=NULL;
    
  }
  for (i=0;i<size;i++)
    display(arr[i],i);
  
  
  do {
  printf("\n choice : 0 : Insert 1: Search 2: Delete 3: Insert by probing");
  scanf("%d",&choice);
  switch(choice) {
  case 0:
  //for insertion using chaining
 
    printf("\nEnter the string : ");
    scanf("%s",string);
    //fgets(string,50,stdin);
    index = indexing(string);
    key=index%size;
    
    arr[key] = chaining(arr[key],string);
    for (i=0;i<size;i++)
      display(arr[i],i);
   break;
  case 1:
    printf("\nEnter the string you want to search : ");
    scanf("%s",string);
    index=indexing(string);
    key=index%size;
    search(arr[key],string);
    for(i=0;i<size;i++)
      display(arr[i],i);
  case 2:
    printf("\nEnter the string you want to delete : ");
    scanf("%s",string);
    for(i=0;i<size;i++) {
      if(arr[i]==NULL) continue;
      if (strcmp(arr[i]->data,string)==0){
        key = i;
        break;
      }
    }
    if(i==size){
      index=indexing(string);
      key=index%size;
    }
    arr[key] = delete(arr[key],string);
    for (i=0;i<size;i++)
      display(arr[i],i);
    break;
  case 3:
    printf("\nEnter which probing sequence you want to use : 0: Linear 1: Quardratic 2: Double");
    scanf("%d",&choice);
    printf("\nEnter the string : ");
    scanf("%s",string);
      //fgets(string,50,stdin);
    index = indexing(string);
    key=index%size;
    switch(choice) {
    case 0:
      tkey=key;
      while(1) {
        if (arr[tkey]==NULL) {
          arr[tkey]= (struct node *) malloc(sizeof(struct node));
          arr[tkey]->data = (char *) malloc(length(string)*sizeof(char));
          strcpy(arr[tkey]->data,string);
          arr[tkey]->next=NULL;
          break;
        }
        tkey=(tkey+1)%size;
        if(tkey==key) {
          printf("\nNo more space .");
          break;
        }
      }
      for (i=0;i<size;i++)
        display(arr[i],i);
      break;
    case 1:
      tkey = key;
      i=1;
      while(1) {
        if (arr[tkey]==NULL) {
          arr[tkey]= (struct node *) malloc(sizeof(struct node));
          arr[tkey]->data = (char *) malloc(length(string)*sizeof(char));
          strcpy(arr[tkey]->data,string);
          arr[tkey]->next=NULL;
          break;
        }
        tkey = (key + power(i++,2))%size;          
        if(tkey==key) {
          printf("\nNo more space .");
          break;
        }
      }
      for (i=0;i<size;i++)
        display(arr[i],i);
      break;
    case 2:
      tkey = key;
      i=0;
      while(1) {
        if (arr[tkey]==NULL) {
          arr[tkey]= (struct node *) malloc(sizeof(struct node));
          arr[tkey]->data = (char *) malloc(length(string)*sizeof(char));
          strcpy(arr[tkey]->data,string);
          arr[tkey]->next=NULL;
          break;
        }
        tkey = (key + i*(1+index%(size-2)))%size;          
        if(tkey==key) {
          printf("\nNo more space .");
          break;
        }
      }
      for (i=0;i<size;i++)
        display(arr[i],i);
      break;
    }
    
        
}      
  }while (choice<5);
return 0;
}
