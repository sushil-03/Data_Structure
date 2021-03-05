// Gold mine Problem
#include<bits/stdc++.h>
#define n 4
#define m 4
using namespace std;

int Solve(int arr[n][m],int row,int col){
   if(n==1 and m>1){
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            sum+=arr[i][j];
        }
          return sum;
      }
    int dp[row][col];
    for(int j=col-1;j>=0;j--){
        for(int i=row-1;i>=0;i--){
            if(j==col-1){
                dp[i][j]=arr[i][j];
            }else if(i==0){
                dp[i][j] =arr[i][j]+max(dp[i][j+1],dp[i+1][j+1]);
            }else if(i==row-1){
                dp[i][j]=arr[i][j]+max(dp[i][j+1],dp[i-1][j+1]);
            }else{
                dp[i][j]=arr[i][j]+max(dp[i][j+1],max(dp[i+1][j+1],dp[i-1][j+1]));
            }
        }
    }
    int ans=INT32_MIN;
    for(int i=0;i<row;i++){
        ans=max(dp[i][0],ans);
    }
    return ans;
}
int main(){
    // int n=3,m=3;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<Solve(arr,n,m);
}