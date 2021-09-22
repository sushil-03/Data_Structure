#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

Now consider if some obstacles are added to the grids. How many unique paths would there be?

An obstacle and space is marked as 1 and 0 respectively in the grid.

Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2

*/

int uniquePathsWithObstacles(vector<vector<int>>& obs) {
    int n=obs.size();
    int m=obs[0].size();
    if(obs[0][0]==1 or obs[n-1][n-1]==1)return 0;
    vector<vector<int>>dp(n,vector<int>(m,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(i==0 and j==0){
              dp[i][j]=1;
          }
          else if(i==0){
              if(obs[i][j]==0 and dp[i][j-1]==1){
                  dp[i][j]+=dp[i][j-1];
              }else {
                  dp[i][j]=-1;
              }
          }else if(j==0){
                if(obs[i][j]==0 and dp[i-1][j]==1){
                  dp[i][j]+=dp[i-1][j];
              }else {
                  dp[i][j]=-1;
              }
          }else{
            if(obs[i][j]==0){
              int upper= dp[i-1][j]!=-1?dp[i-1][j] : 0;
              int right= dp[i][j-1]!=-1?dp[i][j-1] : 0;
              dp[i][j]=upper+right;
            }else{
              dp[i][j]=-1;
            }
          }
        }
    }
  return dp[n-1][m-1];
        
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<vector<int>>v={{0,1},{0,0}};
cout<<uniquePathsWithObstacles(v);


}