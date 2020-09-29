#include <stdio.h>
#include "queue.h"



void BFS(int G[][7],int start,int n)
{
	int i=start;
	int visited[7]={0};//visited array is initialized to 0
			//that is none of the vertices are visited

	printf("%d ",i);//prints the first visited vertice
	visited[i]=1;//visited array marked as one
	enqueue(i);//enters vertice to queue

	while(!isEmpty())
	{
		i=dequeue();//takes out a vertice from queue
		for(int j=1;j<n;j++)
		{
			if(G[i][j]==1 && visited[j]==0)
			{
				printf("%d ",j);
				visited[j]=1;
				enqueue(j);
			}
		}
	}
}


//Here DFS in implemented using recursion
void DFS(int G[][7],int start,int n)
{
	static int visited[7]={0};
	
	if(visited[start]==0)
	{
		printf("%d ",start);
		visited[start]=1;
		for(int j=1;j<n;j++)
		{
			if(G[start][j]==1 && visited[j]==0)
				DFS(G,j,n);
		}
	}
}




int main()
{
	int G[7][7]={{0,0,0,0,0,0,0},
		     {0,0,1,1,0,0,0},
		     {0,1,0,0,1,0,0},
		     {0,1,0,0,1,0,0},
		     {0,0,1,1,0,1,1},
		     {0,0,0,0,1,0,0},
		     {0,0,0,0,1,0,0}};
	//
	//		1
	//	       / \
	//	      2   3
	//	       \ /
	//		4
	//	       / \
	//	      5   6
	//

	BFS(G,1,7);
	printf("\n");
	BFS(G,4,7);
	printf("\n");
	BFS(G,2,7);
	printf("\n");
	BFS(G,3,7);

	printf("\n");
	printf("\n");
	//DFS(G,1,7);
	//printf("\n");
	//DFS(G,4,7);
	//printf("\n");
	DFS(G,2,7);
	printf("\n");

	return 0;

}

