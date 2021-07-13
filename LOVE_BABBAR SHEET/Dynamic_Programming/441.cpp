// Longest Common Substring
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int n=str1.length();
    int m=str2.length();
    int dp[n+1][m+1];
    int res=INT32_MIN;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            res=max(res,dp[i][j]);
        }
    }
    cout<<res<<endl;
}