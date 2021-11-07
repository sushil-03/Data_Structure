// A directed graph is strongly connected if there is a path between all pairs of vertices. A strongly connected component (SCC) of a directed graph is a maximal strongly connected subgraph. 
//We have to find the strongly connected graph i.e if we can reach from every vertex to every other vertex then this is SSC

/*
KOSARAJU ALGORITHM

1.Perform DFS traversal of graph.Push node to stack before returning.
2.Find the transpose graph by reversing the graph.
3.Pop node from stack one by one and again do dfs in modified graph
    Each successfull dfs give one SCC(Strongly Connected Component)
*/
#include<bits/stdc++.h>
using namespace std;
#define V 8
vector<int,vector<int>>adj,rev;
void DFS1(int i,vetor<int>&visited,stack<int>&st){
    visited[i]=true;
    for(int j:adj[i]){
        DFS1(j,visited,st);
    }
    st.push_back(i);
}
void reverse(){
    for(int i=0;i<V;i++){
        for(auto j: adj[i]){
            rev[j].push_back(i);
        }
    }
}
void DFS2(int i,vector<int>&visited){
    cout<<i<<" ";
	visited[i] = true;
	for(int j: rev[i])
		if(!visited[j])
			DFS2(j,visited);
}
void Kosaraju(){
    stack<int>st;
    vector<bool>visited(V,false);

    for(int i=0;i<V;i++){
        if(!visited[i]){
            DFS1(i,visited,st)
        }
    }
    reverse();
    memset(visited,sizeof(visited),false);
    while(!st.empty()){
        int curr =st.top();
        st.pop();
        // New component
        if(visited[curr]==false){
            DFS2(curr,visited);
            cout<<endl;
        }
    }
}
int main(){
    adj[0].push_back(1);
	adj[1].push_back(2);
	adj[2].push_back(0);
	adj[2].push_back(3);
	adj[3].push_back(4);
	adj[4].push_back(5);
	adj[4].push_back(7);
	adj[5].push_back(6);
	adj[6].push_back(4);
	adj[6].push_back(7);

    Kosaraju();
}