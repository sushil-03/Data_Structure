#include<iostrea>
#include<map>
using namespace std;

template<typename T>

class Graph{
    map<T,list<T>> l;
    // map<int,list<int> >l
public:
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T src){
        map<T,int>visited;
        queue<T>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty){
            T node =q.front();
            q.pop();

            for(int nbr : l[node]){
                if(!visited){
                    q.push(nbr);
                    visited[nbr]=true;
                }
            }
        }
    }


};