#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z){
    return min(x,min(y,z));
}
int main(){
    string s="geek";
    string t="gesek";
    int n=s.length();
    int m=t.length();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0)
            dp[i][j]=j;

            else if(j==0)
            dp[i][j]=i;

            else if(s[i-1]==t[j-1])
            dp[i][j]=dp[i-1][j-1];

            else{
                dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
            }
        }
    }
    cout<<dp[n][m];
    return 0;
}