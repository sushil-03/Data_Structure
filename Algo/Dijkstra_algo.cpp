//In this algorithm we have to find the shortest path algorithm
/*
Step to be followed :
Mark all the vertices unlisted initially
Mark all the node with infinite distance initially

Repeat the following step
    1. Select  node with minimum value
    2. Mark this node as processed
    3.Update all the adjacent vertices
        if(cost[u]+wt[uv] <cost) Update
        else 
            Skip

*/
/*
We will be using 3 array 
    1.Parent =>to store the parent of every node
    2.processed => to check the process node 
    3.Value =>store the shortes path starting from 0 and ending to the given node
*/
#include<bits/stdc++.h>
using namespace std;

#define V 6		

int selectMinVertex(vector<int>& value,vector<bool>& setMST)
{
	int minimum = INT_MAX;
	int vertex;
	for(int i=0;i<V;++i)
	{
		if(setMST[i]==false && value[i]<minimum)
		{
			vertex = i;
			minimum = value[i];
		}
	}
	return vertex;
}

void Dijkstra(int graph[V][V])
{
	int parent[V];		//Stores MST
	vector<int> value(V,INT_MAX);	//Used for storing shortest path
	vector<bool> processed(V,false);	//TRUE->Vertex is included in MST

	//Assuming start point as Node-0
	parent[0] = -1;	//Start node has no parent
	value[0] = 0;	//start node has value=0 to get picked 1st

	//Form MST with (V-1) edges
	for(int i=0;i<V-1;++i)
	{
	    int U =selectMinVertex(value,processed);
	    processed[0]=true;
	    for(int j=0;j<V;j++){
	        if(graph[U][j]!=0 and processed[j]==false and value[U]!=INT_MAX and value[U]+graph[U][j]<value[j]){
	            value[j]=value[U]+graph[U][j];
	            parent[j]=U;
	        }
	    }
	}
	//Print MST
	for(int i=1;i<V;++i)
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  wt = "<<graph[parent[i]][i]<<"\n";
}

int main()
{
	int graph[V][V] = { {0, 4, 6, 0, 0, 0},
						{4, 0, 6, 3, 4, 0},
						{6, 6, 0, 1, 8, 0},
						{0, 3, 1, 0, 2, 3},
						{0, 4, 8, 2, 0, 7},
						{0, 0, 0, 3, 7, 0} };

	Dijkstra(graph);	
	return 0;
}
