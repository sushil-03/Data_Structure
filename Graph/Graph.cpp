// **************************************USING LIST**********************************************
// #include<iostream>
// #include<list>
// using namespace std;

// class Graph{
//     int V;
//  Array of list
//     list<int> *l;//new list [v]
//     public:
//     Graph(int V){
//         this->V=V;
//         l=new list<int>[V];
//     }
//     void addEdge(int x,int y){
//         l[x].push_back(y);
//         l[y].push_back(x);
//     }
//     void print(){
//         for(int i=0;i<V;i++){
//             cout<<"Vertex "<<i<<" -> ";
//             for(int nbr : l[i]){
//                 cout<<nbr<<", ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     Graph g(4);
//     g.addEdge(0,1);
//     g.addEdge(0,2);
//     g.addEdge(2,3);
//     g.addEdge(1,2);
//     g.print();
//     return 0;
// }




// ***************************************IN STRINGG(Using Hashmap)****************************
// #include<iostream>
// #include<list>
// #include<unordered_map>
// #include<cstring>
#include<bits/stdc++.h>
using namespace std;

class Graph{
    // Adj list
    unordered_map<string,list<pair<string,int > > >l;

public:
    void addEdge(string x,string y,bool bidir,int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidir)
        l[y].push_back(make_pair(x,wt));
    }
    void print(){
        // iterate over all the keys in the maps
        for(auto p : l){
            string city =p.first;
            list<pair<string,int > >nbrs=p.second;
            cout<< city <<" -> ";
            for(auto nbr:nbrs){
                string des=nbr.first;
                int dist=nbr.second;

                cout<<des<<" "<<dist<<",";
            }
            cout<<endl;
        }
    }    
};

int main(){
    Graph g;
    g.addEdge("A","B",true,20);
    //  string ,string,bi-direrction edge ,weight
    g.addEdge("B","D",true,40);
    g.addEdge("A","C",true,10);
    g.addEdge("C","D",true,30);
    g.addEdge("A","D",false,50);

    g.print();
    return 0;
}