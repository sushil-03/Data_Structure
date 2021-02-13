// Book Allocation Problem(Hard)
#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int mid,int n,int m){
    int sum =0;
    int std=1;
    for(int i=0;i<n;i++){
        if(a[i]>mid)
        return false;
        if(a[i]+sum>mid){
            std++;
            sum=a[i];
            if(std>m)return false;
        }
        else
        sum+=a[i];
    }
    return true;
}
int main(){
    int arr[]={12,34,67,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=2;//number of student
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    int lb=0;
    int ub=sum;
    int ans=0;
    while(lb<=ub){
        int mid =(lb+ub)/2;
        if(solve(arr,mid,n,m)){
            ans=mid;
            ub=mid-1;
        }
        else
        lb=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}