/s//N Queen Problem using Backtracking(Branch and Bound)
//  place queen in position so that no queen intersect each other
#include<bits/stdc++.h>
#define n 8
using namespace std;

void Solve(bool board[][n] , int row,bool cols[],bool ndiag[],bool rdiag[],string anf){
    
    if(row==n){
        cout<<anf<<"."  `1;
        return;
    }
    for(int i=0;i<n;i++){
        if(cols[i]==false && ndiag[row+i]==false && rdiag[row-i+n-1]==false){
            board[row][i]=true;
            cols[i]=true;
            ndiag[row+i]=true;
            rdiag[row-i+n-1]=true;
            Solve(board,row+1,cols,ndiag,rdiag,anf+to_string(row)+"-"+to_string(i)+",  ");
            board[row][i]=false;
             cols[i]=false;
            ndiag[row+i]=false;
            rdiag[row-i+n-1]=false;
        }
    }
}
int main(){
   
    bool board[n][n]={0};
    
    bool cols[n]={0};
    bool ndiag[2  * n - 1]={0};//new diagnol
    bool rdiag[2  * n - 1]={0};//reverse diagnol
    Solve(board,0,cols,ndiag,rdiag,"");
    return 0;
}