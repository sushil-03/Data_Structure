// Reach a given score only score with 3  5   10
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=20;//4ans
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=3;i<=n;i++){
        dp[i]+=dp[i-3];
    }
    for(int i=5;i<=n;i++){
        dp[i]+=dp[i-5];
    }
    for(int i=10;i<=n;i++){
        dp[i]+=dp[i-10];
    }
    cout<<dp[n]<<endl;
    return 0;
}