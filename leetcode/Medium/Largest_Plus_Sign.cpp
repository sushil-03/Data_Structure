#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                      LARGEST PLUS SIGN
You are given an integer n. You have an n x n binary grid grid with all values initially 1's except for some indices given in the array mines. The ith element of the array mines is defined as mines[i] = [xi, yi] where grid[xi][yi] == 0.

Return the order of the largest axis-aligned plus sign of 1's contained in grid. If there is none, return 0.

An axis-aligned plus sign of 1's of order k has some center grid[r][c] == 1 along with four arms of length k - 1 going up, down, left, and right, and made of 1's. Note that there could be 0's or 1's beyond the arms of the plus sign, only the relevant area of the plus sign is checked for 1's.


*/

 int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>>dp(n,vector<int>(n,1));
        for(int i=0;i<mines.size();i++){
              dp[mines[i][0]][mines[i][1]]=0;
        }
  
      vector<vector<int>>left,top,bot,rig;
      left=top=bot=rig=dp;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            int x = n - i - 1;//4
            int y =n -  j - 1;//3
              if(i>0 and top[i][j])
                top[i][j]+=top[i-1][j];
              
              if(j>0 and left[i][j])
                left[i][j]+=left[i][j-1];
              
              if(y < n - 1 and rig[x][y])
                rig[x][y]+=rig[x][y+1];

              if(x < n - 1 and bot[x][y])
                bot[x][y]+= bot[x+1][y];
          }
      }
      int ans=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          int sidewise=min(left[i][j],rig[i][j]);
          int updwn = min(top[i][j],bot[i][j]);
          ans=max(ans,min(sidewise,updwn));
        }
      }
    return ans;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
 vector<vector<int>>m={{4,2}};
 int n=5;
 int ans=orderOfLargestPlusSign(n,m);
 cout<<ans<<endl;
}