// How to Solve Sudoko using Backtracking
#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int> >&board,int i,int j,int val){
    for(int z=0;z<board.size();z++){
        if(board[i][z]==val || board[z][j]==val)
        return false;
    }
    int smi= i / 3 * 3;
    //submatrix ka i
    int smj= j / 3 * 3;

    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            if(board[a+smi][smj+b]==val)
            return false;
        }
    }
    return true;
}

bool SolveSudoko(vector<vector<int> >&board,int i,int j){
    if(i==board.size())return true;
    if(j==board.size())return SolveSudoko(board,i+1,0);
    if(board[i][j]!=0)
    return SolveSudoko(board,i,j+1);
    
        for(int po=1;po<=9;po++){
            if(isValid(board,i,j,po)){
            board[i][j]=po;
            if(SolveSudoko(board,i,j+1))
            return true;
            board[i][j]=0;
            }
        }
    
    return false;
}
int main(){
    int r=9,c=9;
    vector<vector<int> >Sudoko(r);
    for(int i=0;i<r;i++){
        Sudoko[i].assign(c,0);
        for(int j=0;j<c;j++){
            cin>>Sudoko[i][j];
        }
    }
    if(SolveSudoko(Sudoko,0,0)){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<Sudoko[i][j]<<" ";
        }
        cout<<endl;
    }
    }   

}

// [["5","3",".",".","7",".",".",".","."]
// "6",".",".","1","9","5",".",".","."],
// [".","9","8",".",".",".",".","6","."],
// ["8",".",".",".","6",".",".",".","3"],
// ["4",".",".","8",".","3",".",".","1"],
// ["7",".",".",".","2",".",".",".","6"],
// [".","6",".",".",".",".","2","8","."],
// [".",".",".","4","1","9",".",".","5"],
// [".",".",".",".","8",".",".","7","9"]]
// 5 3 4 6 7 8 9 1 2 
// 6 7 2 1 9 5 3 4 8 
// 1 9 8 3 4 2 5 6 7 
// 8 5 9 7 6 1 4 2 3 
// 4 2 6 8 5 3 7 9 1 
// 7 1 3 9 2 4 8 5 6 
// 9 6 1 5 3 7 2 8 4 
// 2 8 7 4 1 9 6 3 5 
// 3 4 5 2 8 6 1 7 9

// 5
// 3
// 0
// 0
// 7
// 0
// 0
// 0
// 0
// 6
// 0
// 0
// 1
// 9
// 5
// 0
// 0
// 0
// 0
// 9
// 8
// 0
// 0
// 0
// 0
// 6
// 0
// 8
// 0
// 0
// 0
// 6
// 0
// 0
// 0
// 3
// 4
// 0
// 0
// 8
// 0
// 3
// 0
// 0
// 1
// 7
// 0
// 0
// 0
// 2
// 0
// 0
// 0
// 6
// 0
// 6
// 0
// 0
// 0
// 0
// 2
// 8
// 0
// 0
// 0
// 0
// 4
// 1
// 9
// 0
// 0
// 5
// 0
// 0
// 0
// 0
// 8
// 0
// 0
// 7
// 9