#include<bits/stdc++.h>
using namespace std;

long long int func(int n,long long int dp[]){
    if(n<=2)return n;
    if(dp[n]!=-1)return dp[n];
    long long int a=(n-1)*func(n-2,dp);
    long long int b= func(n-1,dp);
    return dp[n]=a+b;
}
int countfriendPairing(int n){
    long long int dp[n+1];
    memset(dp,-1,sizeof(dp));
    return func(n,dp);
}
int main(){  int n=4;
    cout<<countfriendPairing(n);
    return 0;
}