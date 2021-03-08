#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int dp[n+1][k+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i==1)
            dp[i][j]=j;
            else if(j==1)
            dp[i][j]=1;
            else{
                int res=INT32_MAX;
                for(int mj=j-1,pj=0;mj>=0;mj--,pj++){
                    int val1=dp[i][mj];
                    int val2=dp[i-1][pj];
                    int val=max(val1,val2);
                    res=min(res,val);
                }
                dp[i][j]=res+1;
            }
        }
    }
    cout<<dp[n][k];
}