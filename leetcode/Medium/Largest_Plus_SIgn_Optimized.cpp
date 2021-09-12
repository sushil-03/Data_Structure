#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*



*/
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        int ans=0;
		// just walk from every direction one by one to each cell and store the min. contiguous valid 1's length of every direction
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        vector<vector<int>> mat(n,vector<int>(n,1));
        for(int i=0; i<mines.size(); i++) 
            mat[mines[i][0]][mines[i][1]]=0;
        
        for(int i=0; i<n; i++) {
             int c=0;
             for(int j=0; j<n; j++) {    // walk right to each pos 
                   mat[i][j]?c++:c=0; 
                   dp[i][j]=min(dp[i][j],c);
             }
        }
    
        cout<<endl;
        for(int i=0; i<n; i++) {
            int c=0;
            for(int j=n-1; j>=0; j--) {   // walk left to each pos
                   mat[i][j]?c++:c=0; 
                   dp[i][j]=min(dp[i][j],c);
            }
        }

         for(int i=0; i<n; i++) {
            int c=0;
            for(int j=n-1; j>=0; j--) {   // walk left to each pos
                   mat[i][j]?c++:c=0; 
                   dp[i][j]=min(dp[i][j],c);
            }
        }
        for(int i=0; i<n; i++) {
            int c=0;
            for(int j=0; j<n; j++) {
                  mat[j][i]?c++:c=0;     // walk down to each pos
                  dp[j][i]=min(dp[j][i],c);
            }
        }
        for(int i=0; i<n; i++) {
            int c=0;
            for(int j=n-1; j>=0; j--) {  // walk up to each pos 
                  mat[j][i]?c++:c=0;
                  dp[j][i]=min(c,dp[j][i]);
            }
        }
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
              cout<<dp[i][j]<<" ";
                ans=max(ans,dp[i][j]);  
            }
            cout<<endl;
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