// Colouring Problem
#include<bits/stdc++.h>
using namespace std;

bool isSafe(bool graph[101][101],int n,int idx,vector<int>colour,int j){
    
    for(int i=0;i<n;i++){
        if(graph[idx][i]==1 && colour[i]==j) return false;
    }
    return true;
}

bool Solve(bool graph[101][101],int m,int n,vector<int>colour,int idx){
    if(idx==n){
        return true;
    }
    for(int j=0;j<m;j++){
        if(isSafe(graph,n,idx,colour,j)){
            colour[idx]=j;
            if(Solve(graph,m,n,colour,idx+1))
            return true;
            colour[idx]=-1;
        }
    }
}
int main(){
    int n,m,e;//n is number of person, m is the number of colour and e is the number of linkage
    cin>>n>>m>>e;
    bool graph[101][101]={0};
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        graph[a-1][b-1]=1;
        graph[b-1][a-1]=1;
    }
    vector<int>colour(n,-1);
    if(Solve(graph,m,n,colour,0))
    cout<<"happening";
    else
    cout<<"NOt happening";
    return 0;
}