// Place Queen Tracking
#include<bits/stdc++.h>
#define n 4
using namespace std;
void Solve(bool board[][n],bool cols[],int row,bool ndiag[],bool rdiag[],int res[][n]){
    if(row==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    return ;
    }
    for(int i=0;i<n;i++){
        if(cols[i]==false && ndiag[row+i]==false && rdiag[row-i +n-1]==false){
            // board[row][i]=true;
            cols[i]=true;
            ndiag[row+i]=true;
            rdiag[row -i+n-1]=true;
            res[row][i]=1;
            Solve(board,cols,row+1,ndiag,rdiag,res);
            // board[row][i]=false;
            cols[i]=false;
           ndiag[row+i]=false;
            rdiag[row -i+n-1]=false;
            res[row][i]=0;
        }
  }
}
int main(){
    bool board[n][n]={0};
    bool cols[n+1]={0};
    bool ndiag[2*n-1]={0};
    bool rdiag[2*n-1]={0};
    int res[n][n]={0};
    Solve(board,cols,0,ndiag,rdiag,res);
    return 0;

}