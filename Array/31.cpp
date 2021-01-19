// DP
#include<iostream>
using namespace std;
int main(){
    int a[]={ 2, 30, 15, 10, 8, 25, 80};
    int n = sizeof(a)/sizeof(a[0]);
    int dp[n];
    for(int i=0;i<n;i++)  dp[i] =0;
    int ma = a[n-1];
    int mi = a[0];
    for (int i = n-2; i >=0; i--){
        if(a[i]>ma)  ma =a[i];
        dp[i] = max(dp[i+1],ma-a[i]);
    }
    for (int i = 1; i < n; i++){
        if(mi>a[i])  mi =a[i];
        dp[i] = max(dp[i-1],dp[i]+(a[i]-mi));
    }
    cout<<dp[n-1];
    
    return 0;
}