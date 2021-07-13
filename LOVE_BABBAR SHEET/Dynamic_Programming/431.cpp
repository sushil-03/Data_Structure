#include<bits/stdc++.h>
using namespace std;
int Solve(int a[],int n){
    if(n<0)return 0;
    if(n==0) return a[0];
    if(n==1) return a[0]+a[1];
     return Solve(a,n-1)+a[n]+Solve(a,n-2),a[n]+a[n-1]+Solve(a,n-3);
}
int main(){
    int arr[]={3000, 2000, 1000, 3, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Solve(arr,n-1);
}