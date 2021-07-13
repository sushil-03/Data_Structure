#include<bits/stdc++.h>
using namespace std;
int Solve(int arr[],int n){
    int left[n];
    int right[n];
     left[0]=1;
     right[n-1]=1;
    for(int i=1;i<n;i++){
        left[i]=left[i-1]*arr[i-1];
    }
    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        arr[i]=left[i]*right[i];
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Solve(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}