#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    int k;cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=0;
    sort(arr,arr+n);
    for(int i=n-1;i>0;i--){
        if(arr[i]-arr[i-1]<k){
            res+=arr[i];
            res+=arr[i-1];
            i--;
        }
    }
    cout<<res;
    return 0;
}