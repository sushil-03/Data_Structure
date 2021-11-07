// The only difference between bellman ford algo is that it tell if the graph has negative  edge weight cycle  else it give the shortest path from the source
/*
Initalize all the vertices as infinite except source node.
Relax all the edges V-1 times
    if d[u]+cost(uv)<d[v] then update
        else
            Skip

Relax one more 
    if we have new shortest path for any edges 
        then this has negative edge weight  cycle
    else 
        we dont

*/
#include<bits/stdc++.h>
using namespace std;
struct Edge{
    int src,dest,wt;
};
int V,E;
void bellmanFord(vector<Edge>edge_list){
    vector<int>value(V,INT_MAX);
    vector<int>parent(V);
    value[0]=0;
    parent[0]=-1;
    bool updated;
    for(int i=0;i<V;i++){
        updated=false;
        for(int j=0;j<E;j++){
            int S=edge_list[j].src;
            int D=edge_list[j].dest;
            int W=edge_list[j].wt;
            if(value[s]!=int_max && value[s]+w<value[d]){
                value[d]=value[s]+w;
                parent[s]=d;
                updated=true;
            }
        }
        if(updated==false){
            break;
        }
    }
    //Now checking one more relaxation

    for(int j=0;j<E and updated==true ;j++){
            int S=edge_list[j].src;
            int D=edge_list[j].dest;
            int W=edge_list[j].wt;

            if(value[s]!=int_max && value[s]+w<value[d]){
                cout<<"Graph has negative edge weight cycle "<<endl;
                return;
            }
    }
    for(int i=1;i<V;++i)
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  Cost to reach "<<parent[i]<<"from source 0 = "<<value[i]<<"\n";

}
int main{
    cin>>V>>E;
    vector<Edge>edge_list;
    int src,dest,wt;
    for(int i=0;i<V;i++){
        cin>>src>>dest>>wt;
        edge_list[i].src=src;
        edge_list[i].dest=dest;
        edge_list[i].wt=wt;
    }
    bellmanFord(edge_list);
    return 0;
}