//Using Dynamic Programming
#include<bits/stdc++.h>
using namespace std;
int dp[10001];
int Solve(int arr[],int n){
    if(n<=-1)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
     
    int opt1= arr[n] +Solve(arr,n-2);
    int opt2= Solve(arr,n-1);

    return max(opt1,opt2);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    dp[n];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<Solve(arr,n-1);
    return 0;
}