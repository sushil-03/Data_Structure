#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                          Solve Sudoko
Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy all of the following rules:

Each of the digits 1-9 must occur exactly once in each row.
Each of the digits 1-9 must occur exactly once in each column.
Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
The '.' character indicates empty cells.


*/

bool isValid(vector<vector<char>>&board,int i,int j,char val){
      
  for(int z=0;z<9;z++){
      if(board[i][z]==val or board[z][j]==val){
          return false;
      }
  }
  int smi = i / 3 * 3;
  int smj = j / 3 * 3;
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          if(board[i+smi][j+smj]==val){
              return false;
          }
      }
  }
  return true;
}
bool helper(vector<vector<char>>&board,int i,int j){
  if(i==9)return true;
  if(j==9){
      return helper(board,i+1,0);
  }
  if(board[i][j]!='.')return helper(board,i,j+1);
  
  for(char po='1';po<='9';po++){
      if(isValid(board,i,j,po)){
          board[i][j]=po;
          
      if(helper(board,i,j+1)==true)
          return true;
      else
            board[i][j]='.';
          
      }

  }
      return false;
    
}
  void solveSudoku(vector<vector<char>>& board) {
    helper(board,0,0);
      
      
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
solveSudoku(board);

for(int i=0;i<9;i++){
  for(int j=0;j<9;j++){
    cout<<board[i][j];
  }
}


}