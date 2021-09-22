#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*

Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
*/

int minPathSum(vector<vector<int>>& grid) {
    int n =grid.size();
    int m=grid[0].size();
    
    vector<vector<int>>dp(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 and j==0)
                dp[i][j] = grid[i][j];
            else if(i==0){
                dp[i][j] =dp[i][j-1]+grid[i][j];
            }else if(j==0){
                dp[i][j] =dp[i-1][j]+grid[i][j];
            }else{
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
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

vector<vector<int>>grid = {{1,3,1},{1,5,1},{4,2,1}};
cout<<minPathSum(grid);
}