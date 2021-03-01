#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int wt[n];
    int val[n];
    for(int i=0;i<n;i++){
        cin>>val[i]>>wt[i];
    }
    int W;
    cin>>W;
    int dp[n+1][W+1];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1]<=j){
                dp[i][j]= max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][W];
    return 0;

}