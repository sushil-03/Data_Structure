#include<bits/stdc++.h>
// #define n 9
using namespace std;
bool isValid(vector<vector<int> >&Sudoko,int i,int j,int val){
    for(int z=0;z<Sudoko.size();z++){
        if(Sudoko[z][i]==val || Sudoko[j][z]==val)
        return false;
    }
    int smi= i / 3 * 3;
    int smj =j / 3 * 3;
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            if(Sudoko[a+smi][b+smj]==val)
            return false;
        }
    }
return true;
}



bool Solve(vector<vector<int> >&board,int i,int j){
    if(i==board.size())return true;
    if(j==board.size())return Solve(board,i+1,0);
    if(board[i][j]!=0)
    return Solve(board,i,j+1);
    
        for(int po=1;po<=9;po++){
            if(isValid(board,i,j,po)){
            board[i][j]=po;
            if(Solve(board,i,j+1))
            return true;
            board[i][j]=0;
            }
        }
    
    return false;
}
int main(){
    int n=9;
    vector<vector<int> > Sudoko(n);
    for(int i=0;i<n;i++){
        Sudoko[i].assign(n,0);
        for(int j=0;j<n;j++){
            cin>>Sudoko[i][j];
        }
    }
    if(Solve(Sudoko,0,0)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Sudoko[i][j]<<" ";
        }
        cout<<endl;
    }
    }
}
