//In this algorithm we have to find the minimum weight require to tranverse through all the vertices;
/*
Step to be followed :
    1.Sort all the edges in increasing order
    2. a) Pick the smallest edge
    b) Check if adding the edge form a cycle
    c)If cycle not found ->Form a edge
            else -> Exclude a edge
    3.Repeat step 2 unless (v-1)edges are included
*/
//For checking cycle or make union we use union by rank method .In this we use parent and rank if there absolute parent are same then they belong to same tree else not.This means there already  a path from one edge to another if we include this edge this will form a cycle.

#include<bits/stdc++.h>
using namespace std;
struct Edge{
    int src,dest,wt;
};
struct Node{
    int parent,rank;
};
vector<Node>dsuf;
vector<Edge>MST;
int res=0;
bool cmp(Edge a,Edge b){
    return a.wt<b.wt;
}

int find(int v){
    if(dsuf[v].parent== -1){
        return v;
    }
    return    dsuf[v].parent =find(dsuf[v].parent);
    
}

void union_oper(int fr,int to){
    if(dsuf[fr].rank <dsuf[to].rank){
        dsuf[to].parent =fr;
    }else if(dsuf[fr].rank >dsuf[to].rank){
        dsuf[fr].parent =to;
    }else{
        dsuf[fr].parent =to;
        dsuf[to].rank+=1;
    }
    
}
void Krushkal(vector<Edge>&edge_list,int v,int e){
    //sorting edge list;
    sort(edge_list.begin(),edge_list.end(),cmp);
    
    int i=0,j=0;
    while(i<v-1 and j<e){
        //find absolute parent
        int fromP=find(edge_list[j].src);
        int toP= find(edge_list[j].dest);
        
        //Same parent
        if(fromP==toP){
            ++j;
            continue;
        }
        
        //Union Operation
        union_oper(fromP,toP);
        res+=edge_list[j].wt;
        MST.push_back(edge_list[j]);
        ++i;
    }
}


void print(vector<Edge>mst){
    cout<<endl<<"NEW MST IS ----->"<<endl;
    for(auto p:mst){
        cout<<p.src<<" "<<p.dest<<" "<<p.wt<<endl;
    }
    
}



int main(){
    int v,e;
    cin>>v>>e;
    
    //For making union by rank method
    dsuf.resize(v);
    for(int i=0;i<v;i++){
        dsuf[i].parent=-1;
        dsuf[i].rank= 0;
    }
    
    //Making edge list
    vector<Edge>edge_list;
    Edge temp;
    for(int i=0;i<e;i++){
        int from,to,wt;
        cin>>from>>to>>wt;
        temp.src=from;
        temp.dest=to;
        temp.wt=wt;
        edge_list.push_back(temp);
    }
    
    Krushkal(edge_list,v,e);
    print(MST);
    cout<<res;
    return 0;
}