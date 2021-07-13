// Partition sum 
#include<bits/stdc++.h>
using namespace std;

int Solve(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2!=0)
    return 0;
    sum=sum/2;
    bool dp[sum+1]={0};
    for(int i=0;i<=sum;i++){
        for(int j=sum;j>=arr[i];j--){
            if(dp[j-arr[i]]==1 || j==arr[i]){
                dp[i]=1;

            if(dp[sum]){
                return dp[sum];
            }
            }
        }
    }
    return dp[sum];
}
int main(){
    int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    Solve(arr,n);

}