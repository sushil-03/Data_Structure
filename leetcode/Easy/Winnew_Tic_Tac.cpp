#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Tic-tac-toe is played by two players A and B on a 3 x 3 grid.

Here are the rules of Tic-Tac-Toe:

Players take turns placing characters into empty squares (" ").
The first player A always places "X" characters, while the second player B always places "O" characters.
"X" and "O" characters are always placed into empty squares, never on filled ones.
The game ends when there are 3 of the same (non-empty) character filling any row, column, or diagonal.
The game also ends if all squares are non-empty.
No more moves can be played if the game is over.
Given an array moves where each element is another array of size 2 corresponding to the row and column of the grid where they mark their respective character in the order in which A and B play.

Return the winner of the game if it exists (A or B), in case the game ends in a draw return "Draw", if there are still movements to play return "Pending".

You can assume that moves is valid (It follows the rules of Tic-Tac-Toe), the grid is initially empty and A will play first.

 

Example 1:

Input: moves = [[0,0],[2,0],[1,1],[2,1],[2,2]]
Output: "A"
Explanation: "A" wins, he always plays first.
"X  "    "X  "    "X  "    "X  "    "X  "
"   " -> "   " -> " X " -> " X " -> " X "
"   "    "O  "    "O  "    "OO "    "OOX"


*/

string tictactoe(vector<vector<int>>& moves) {
    vector<vector<char>>board(3,vector<char>(3,'z'));
    
    for(int i=0;i<moves.size();i++){
      if(i%2==0)
         board[moves[i][0]][moves[i][1]]='X';
      else
         board[moves[i][0]][moves[i][1]]='O';
    }

for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cout<<board[i][j]<<" ";
      }
      cout<<endl;
    }

    for(int i=0;i<3;i++){
      int countRX=0,countRO=0,countCX=0,countCO=0;
      for(int j=0;j<3;j++){
        if(board[i][j]=='X')countCX++;
        if(board[i][j]=='O')countCO++;
        if(board[j][i]=='X')countRX++;
        if(board[j][i]=='O')countRO++;
        if(countCX ==3  or countRX==3  ){
          return "A";
        }
        if(countCO ==3 or countRO==3)
          return "B";
      }
    }

      int countDX=0,countDO=0,countRX=0,countRO=0;
  // Diagnol
  for(int i=0;i<3;i++){
    if(board[i][i]=='X')countDX++;
    if(board[i][i]=='O')countDO++;

    if(board[2-i][2-i]=='X')countRX++;
    if(board[2-i][i]=='O')countRO++;
    
    if(countDX ==3  or countRX==3  ){
          return "A";
        }
    if(countDO ==3 or countRO==3)
          return "B";
    }
cout<<countRO<<endl;
//No winning

  if(moves.size()==9){
    return "DRAW";
  }
  return "PENDING";


    // for(int i=0;i<3;i++){
    //   for(int j=0;j<3;j++){
    //     cout<<board[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }
   
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<vector<int>>m={{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
string ans=tictactoe(m);
cout<<ans;


}