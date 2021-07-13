// Unbounded Knapsack
#include<bits/stdc++.h>
using namespace std;
int main(){
    int wt[]={1, 3, 4, 5};
    int val[]={1, 4, 5, 7};
    int n=sizeof(wt)/sizeof(wt[0]);
    int w=8;
    int dp[w+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=1;i<=w;i++){
        int ma=0;
        for(int j=0;j<n;j++){
            if(wt[j]<=i){
               int res=i-wt[j];
               int tot=dp[res]+val[j]; 
               ma=max(ma,tot);
            }
        }
        dp[i]=ma;
    }
    cout<<dp[w]<<endl;
    return 0;
}