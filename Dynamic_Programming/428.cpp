#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dp[n];
    int ovmax=0;
    for(int i=0;i<n;i++){
        int ma=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                ma=max(ma,dp[j]);
            }
        }
        dp[i]=ma+arr[i];
        ovmax=max(ovmax,dp[i]);
    }
    cout<<ovmax;
}