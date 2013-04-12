#include<stdio.h>
#include<stdlib.h>

struct Graph {
    int E;
	int V;
	int Adj[50][50]; //two dimensional Adjacnecy matrix
};

struct Graph *G = NULL; 

struct Graph *adjMatrixOfGraph() {
	int i,u,v,c;
	struct Graph *G ;
	G = (struct Graph *) malloc(sizeof(struct Graph));
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
/*	G->Adj = (int **) malloc(G->V * sizeof(int));
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
    }*/   
	    
	printf("Test1");    
	for (u=0;u<G->V;u++)
		for (v=0;v<G->V;v++) {
		    printf("\ttest2");
		    G->Adj[u][v]=0;
		}
	printf("\nTest3");
		    
    for (i=0;i<G->E;i++) {
        printf("\nEnter edges (u,v) and cost/weight : ");
	    scanf("%d %d %d",&u,&v,&c);
	    G->Adj[u][v] = c ; //for directed graph assign to both (u,v) and (v,u)
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

// Bellman-Ford Algorithm to find shortest path
void bFord(struct Graph *G,int s) {
    int v,d[G->V]; //d is for distance
    int que[100],rear=-1,i;//queue is created as an array
    for (i=0;i<G->V;i++) d[i]=0; //for initialising distance to each vertex as 0
    que[++rear]=s;
    while(rear!=-1) { 
        s=que[0];  // for deleting 
        rear--;    // element from queue
        if (rear!=-1)
        for (i=0;i<=rear;i++) que[i]=que[i+1];
        
        for(v=0;v<G->V;v++) { //for each adjacent vertex v of s
            if (G->Adj[s][v]!=0 && (d[v] > d[s] + G->Adj[s][v] || d[v]==0)) { //if v is adjacent and its previous distance is less then update it
            //if v is not present in queue then push v in queue
                 for (i=0;i<=rear;i++) //check whether present or not
                    if (que[i] == v) break;
                 if (i==rear+1) // if not present then 
                    que[++rear] = v; //insert v in que
                    
                d[v]=d[s] + G->Adj[s][v];
            }
        }
    }
    printf("\nDistance from %d to : ",s);
    for (i=0;i<G->V;i++) 
        printf("\n%d --> %d",i,d[i]);

}       
        
         
    


//calling main
        
void main() {
 
    G = adjMatrixOfGraph(); //creating a new Graph 
    visited = (int *) malloc(G->V * sizeof(int));
    int i,c,u;
    printf("0:DFS 1:BFS 2:Bellman-Ford 3:Prim's " );
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
    case 2:
        printf("\nEnter the vertex to start with : ");
        scanf("%d",&u);
        bFord(G,u);
        break;
    case 3:
        printf("\nEnter the vertex to start with : ");
        scanf("%d",&u);
        prims(G,u);
        break;
    }
}
     
	
	    
	    
		    
		
		    
		    
		
