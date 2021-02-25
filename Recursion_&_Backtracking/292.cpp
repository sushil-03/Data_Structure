// Equal Partioning of subset of k size
#include<bits/stdc++.h>
using namespace std;

bool Partioning(vector<int>p,int a[],int s,int r){
    if(r==0)return true;
    int x=a[r];
    r--;
    for(int i=0;i<p.size();i++){
        if(p[i]+x<=s){
            p[i]+=x;
            if(Partioning(p,a,s,r))
            return true;
            p[i]-=x;
        }
    }
    return false;
}
bool Solve(int arr[],int n,int k){
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];

    if(sum%k!=0)
    return false;
    int s=sum/k;
    if(arr[n-1]>s)
    return false;
    int r=n-1;

    vector<int>p;
    for(int i=0;i<k;i++){
        p.push_back(0);
    }
    return Partioning(p,arr,s,r);
}
int main(){
    int arr[]={2,1,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    
    if(Solve(arr,n,k)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}