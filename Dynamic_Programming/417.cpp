#include<bits/stdc++.h>
using namespace std;
int Solve(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    if(sum%2!=0)
    return 0;
    else{
        sum=sum/2;
        bool dp[sum+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=sum;j>=arr[i];j--){
                if(dp[j-arr[i]]==1  || j==arr[i])
                dp[j]=1;
            }
        }
        return dp[sum];
    }
}
int main(){
    int arr[]={1, 5, 11, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(Solve(arr,n))
    cout<<"TRUE";
    else
    cout<<"FALSE";
}