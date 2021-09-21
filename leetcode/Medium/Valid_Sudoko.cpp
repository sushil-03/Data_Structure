#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                          VALID SUDOKO
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

*/

bool checkCell(vector<vector<char>>&board,int i,int j){
    char val=board[i][j];
    board[i][j]='.';
    for(int k=0;k<9;k++){
        if(board[i][k]==val or board[k][j]==val){
            return false;
        }
    }   
    int smi = i / 3 * 3;
    int smj = j / 3 * 3;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[smi+i][smj+j]==val)return false;
        }
    }
    board[i][j]=val;
    return true;
}
bool isValidSudoku(vector<vector<char>>& board) {
  for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
          if(board[i][j]!='.'){
              if(checkCell(board,i,j)==false){
                  return false;
              }
          }
        
      }
  }
return true;
}

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

vector<vector<char>>board;

for(int i=0;i<9;i++){
  for(int j=0;j<9;j++){
    cin>>board[i][j];
  }
}
cout<< isValidSudoku(board);


}