#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int mid,int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>mid)
        sum +=a[i]-mid;
    }
    if(sum>=m)
    return true;
    else 
    return false;

}
int main(){
    int n, m;
    cin>>n>>m;
    int height[n];
    for(int i=0;i<n;i++)
    cin>>height[i];
    int lb=0;
    int ub=*max_element(height,height+n);//stl function to get maximum element of array;
    int ans=0;
    while(lb<=ub){
        int mid=(lb+ub)/2;
        if(solve(height,mid,n,m)){
            ans =mid;
            lb=mid+1;
        }
        else
        ub=mid-1;
    }
    cout<<ans;
    return 0;

}