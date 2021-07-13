#include<bits/stdc++.h>
using namespace std;
int *Solve(int arr[],int n){
    int *a=new int(2);
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])-1]<0)//-1 is because we started from 0
        a[0]=abs(arr[i]);
        else
        arr[abs(arr[i])-1]= -arr[abs(arr[i])-1];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0)
        a[1]=i+1;
    }
    return a;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    auto ans=Solve(arr,n);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}