// Knight(Horse chess)Problem
#include<bits/stdc++.h>
#define n 5
using namespace std;
void display(int chess[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl<<endl;
}

void Solve(int chess[][n],int r,int c,int move){
    if(r<0 || c<0 || r>=n || c>=n || chess[r][c]>0){
        return ;
    }
    else if(move == n*n){
        chess[r][c]=move;
        display(chess);
        chess[r][c]=0;
        return ;
    }
    chess[r][c]=move;

    Solve(chess,r-2,c+1,move+1);
    Solve(chess,r-1,c+2,move+1);
    Solve(chess,r+1,c+2,move+1);
    Solve(chess,r+2,c+1,move+1);
    Solve(chess,r+2,c-1,move+1);
    Solve(chess,r+1,c-2,move+1);
    Solve(chess,r-1,c-2,move+1);
    Solve(chess,r-2,c-1,move+1);
    chess[r][c]=0;

}
int main(){
    int chess[n][n]={0};
    int r,c;
    cin>>r>>c;
    Solve(chess,r,c,1);
}