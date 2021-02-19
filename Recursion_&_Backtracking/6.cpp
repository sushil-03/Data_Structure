//Printing Lexicographical Order(Dictionary word) using Recursion
#include<bits/stdc++.h>
using namespace std;
void dfs(int i,int n){
    if(i>n)
    return;
    cout<<i<<" ";
    for(int j=0;j<=9;j++){
   
    dfs(i*10+j,n);
    }
}
void Solve(int n){

    for(int i=1;i<=9;i++){
        dfs(i,n);
         cout<<endl;
    }
}

int main(){
    int range;
    cin>>range;
    Solve(range);
    
}