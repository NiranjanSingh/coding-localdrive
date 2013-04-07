#include<stdio.h>
#include<stdlib.h>

struct Graph {
    int E;
	int V;
	int **Adj; //two dimensional Adjacnecy matrix
};

struct Graph *G = NULL; 

struct Graph *adjMatrixOfGraph() {
	int i,u,v,c;
	struct Graph *G = (struct Graph *) malloc(sizeof(struct Graph));
	if(!G) {
		printf("Memory Error");
		return;
    }
    
   
	printf("test0\t");
	//G->Adj[][]=[G->V][G->V]
	
	printf("Enter number of vertices and Number of Edges :");
	scanf("%d %d",&G->V,&G->E);
	
	printf("This line is also not printing");
	
	//for creating a double dimensional array via pointer
	G->Adj = (int **) malloc(G->V * sizeof(int));
	//memory allocation testing
	if(!G->Adj) {
		printf("Memory Error");
		return;
    }
    
	for (i=0;i<G->V;i++) {
	    G->Adj[i] = (int *) malloc(G->V * sizeof(int));
	    //memory allocation testing may be deleted afterwords
	    if(!G->Adj[i]) {
		printf("Memory Error");
		return;
        }
    }   
	    
	printf("Test1");    
	for (u=0;u<G->V;u++)
		for (v=0;v<G->V;v++) {
		    printf("\ttest2");
		    G->Adj[u][v]=0;
		}
	printf("\nTest3");
		    
    for (i=0;i<G->E;i++) {
        printf("\nEnter edges (u,v) and cost : ");
	    scanf("%d %d %d",&u,&v,&c);
	    G->Adj[u][v] = G->Adj[v][u] = c ; //for undirected graph assign to both (u,v) and (v,u)
	}
	
	return G;
}

// Depth First Search D.F.S

 
int *visited; //array for keeping record whether vertex is visited or not

void DFS(struct Graph *G,int u) { //u is vertex to start with
    int v;
    visited[u] = 1;
    printf("\n vertex : %d",u);
    for (v=0;v<G->V;v++) {
        if (!visited[v] && G->Adj[u][v]) //for checking whether the node is visited or not and sending adjacent vertices to DFS using recursion
            DFS(G,v);
    }
}

// Breath First Search B.F.S

void BFS(struct Graph *G,int u) {
    int v;
    int que[100],rear=-1,i;//queue is created as an array
    que[++rear]=u;
    while(rear!=-1) {
    //for deleting element from queue
        u = que[0];
        rear--;
	    if(rear!=-1)
	    for(i=0;i<=rear;i++) que[i]=que[i+1];
	    
        printf("\nVertex : %d",u);
        visited[u] =1;
        for(v=0;v<G->V;v++) {
            if(!visited[v] && G->Adj[u][v])
                que[++rear]=v;
        }
    }
}
    


//calling main
        
void main() {
 
    G = adjMatrixOfGraph(); //creating a new Graph 
    visited = (int *) malloc(G->V * sizeof(int));
    int i,c,u;
    printf("0:DFS 1:BFS ");
    scanf("%d",&c);
    switch(c) {
    case 0:
        for (i=0;i<G->V;i++)
            visited[i] = 0;
        printf("\nEnter the vertex to start with : ");
        scanf("%d",&u);
        DFS(G,u);
        break;
    case 1:
        for (i=0;i<G->V;i++)
            visited[i] = 0;
        printf("\nEnter the vertex to start with : ");
        scanf("%d",&u);
        BFS(G,u);
        break;
    }
}
     
	
	    
	    
		    
		
		    
		    
		