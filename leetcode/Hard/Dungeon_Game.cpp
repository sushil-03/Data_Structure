#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*

The demons had captured the princess and imprisoned her in the bottom-right corner of a dungeon. The dungeon consists of m x n rooms laid out in a 2D grid. Our valiant knight was initially positioned in the top-left room and must fight his way through dungeon to rescue the princess.

The knight has an initial health point represented by a positive integer. If at any point his health point drops to 0 or below, he dies immediately.

Some of the rooms are guarded by demons (represented by negative integers), so the knight loses health upon entering these rooms; other rooms are either empty (represented as 0) or contain magic orbs that increase the knight's health (represented by positive integers).

To reach the princess as quickly as possible, the knight decides to move only rightward or downward in each step.

Return the knight's minimum initial health so that he can rescue the princess.

Note that any room can contain threats or power-ups, even the first room the knight enters and the bottom-right room where the princess is imprisoned.

*/
int calculateMinimumHP(vector<vector<int>>& dungeon) {
      int row=dungeon.size();
      int col=dungeon[0].size();
      vector<vector<int>>dp(row,vector<int>(col));
      for(int i=row-1;i>=0;i--){
          for(int j=col-1;j>=0;j--){
              if(i==row-1 and j==col-1){
                  dp[i][j]=min(0,dungeon[i][j]);
              }else if(j==col-1){
                  dp[i][j]=min(0,dungeon[i][j]+dp[i+1][j]);
              }else if(i==row-1){
                  dp[i][j]=min(0,dungeon[i][j]+dp[i][j+1]);
              }else{
                  dp[i][j]=min(0,dungeon[i][j]+max(dp[i][j+1],dp[i+1][j]));
              }
          }
      }
      
      return abs(dp[0][0])+1;
  }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


}