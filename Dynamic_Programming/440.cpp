#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int Solve(int a[],int i,int j,int target){
    if(i>=j)return 0;
    if(a[j]-a[i]<=target)
    return 0;
    if(dp[i][j]!=-1)return dp[i][j];

    return dp[i][j]=1+min(Solve(a,i+1,j,target),Solve(a,i,j-1,target)) ;
}
int main(){
    int arr[]={1,3,4,9,10,11,12,17,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    memset(dp,-1,sizeof(dp));
    sort(arr,arr+n);
    cout<<Solve(arr,0,n-1,target);
    return 0;
}