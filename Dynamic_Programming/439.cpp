// Minimum cost to fill given weight in a bag
#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int Solve(int arr[],int n,int w){
    if(n==-1 && w==0)
        return 0;
    if(n==-1)
        return 1e9;
    if(w==0)
        return 0;
    if(dp[n][w]!=-1)
        return dp[n][w];
    
    if(n+1>w || arr[n]==-1)
    return Solve(arr,n-1,w);
    int x=Solve(arr,n-1,w);
    int y=arr[n]+Solve(arr,n,w-(n+1));
    return dp[n][w]=min(x,y);
}
int main(){
    int arr[]={20, 10, 4, 50, 100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int w=5;
    memset(dp,-1,sizeof(dp));
    cout<<Solve(arr,n-1,w);
    return 0;
}