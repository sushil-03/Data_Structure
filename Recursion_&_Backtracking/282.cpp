#include<bits/stdc++.h>
#define n 5
using namespace std;
bool subset(int arr[],int sum){
    // int n=sizeof(arr)/sizeof(arr[0]);
    int dp[n+1][sum+1];
    int r=sizeof(dp)/sizeof(dp[0]);
    int c=sizeof(dp[0])/sizeof(dp[0][0]);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || j==0)dp[i][j]=true;
            else if(i==0)dp[i][j]=false;
            else if(j==0)dp[i][j]=true;
            else{
                if(dp[i-1][j]==true)
                dp[i][j]=true;
                else{
                    int val=arr[i-1];
                    if(j>=val){
                        if(dp[i-1][val-j]==true)
                        dp[i][j]=true;
                    }
                }
            }
        }
    }

    return dp[r][c];
}
int main(){
// int n=4;
int arr[]={3, 1, 7, 9, 12};
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
if(sum%2!=0)
return 0;

if(subset(arr,sum/2)){
    cout<<"YEs";
}
else{
    cout<<"NO";
}
}