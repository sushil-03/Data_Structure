// we have to find number of ways to make target
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long int dp[1000][1000];

    long long Solve(int a[],int m,int n){
        if(m== -1 && n>0)return 0;
        if(n==0) return 1;
        if(n<0)return 0;

        if(dp[m][n]!=-1)return dp[m][n];

        return dp[m][n]=Solve(a,m,n-a[m])+Solve(a,m-1,n);
    }
    long long int count(int a[],int n,int m){
        dp[m][n+1];
        memset(dp,-1,sizeof(dp));
        return Solve(a,m-1,n);
    }
};
int main(){
    int arr[]={1,2,3};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=4;
    Solution ob;
    cout<<ob.count(arr,n,m)<<endl;
    return 0;
}