// Using naive Solution
#include<bits/stdc++.h>
using namespace std;
int Solve(int arr[],int n){
    int right=arr[0];
    int left=0;
    int latest;
    for(int i=1;i<n;i++){
        latest= (right>left)?right:left;
        right =left+arr[i];
        left=latest;
    }
    return (left>right)?left:right ;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<Solve(arr,n);
    return 0;
}