#include<bits/stdc++.h>
using namespace std;
int Solve(int a[],int n){
    if(n==1)return 1;
    int dp[n];
    a[0]==1?dp[0]=1:dp[0]=0;
    int count=0;
    for(int i=1;i<n;i++){
        int ma=0;
        for(int j=0;j<i;j++){
            if(a[j]-a[i]==1||a[j]-a[i]==-1){
                ma=max(ma,dp[j]);
            }
        }
        dp[i]=ma+1;
        count=max(count,dp[i]);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<Solve(a,n);
}