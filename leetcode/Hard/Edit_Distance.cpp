#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*



*/

int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0)dp[i][j]=j;
                else if(j==0)dp[i][j]=i;
                else if(word1[j-1]==word2[i-1]){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
                
            }
        }
        for(int i=0;i<=m;i++){
          for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
          }
          cout<<endl;
        }
        return dp[m][n];
        
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string word1 = "horse", word2 = "ros";
cout<<minDistance(word1,word2);

}