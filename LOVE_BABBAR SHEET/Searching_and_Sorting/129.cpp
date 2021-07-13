// Small factorial number 
#include<bits/stdc++.h>
using namespace std;
bool check(int mid,int n){
    int count=0;
    int f=5;
    while(f<=mid){
        count +=mid/f;
        f*=5;
    }
    return (count >=n);
}
int Solve(int n){
    if(n==1)
    return 5;
    int lo=0;
    int hi=5*n;
    int ans =0;
    while(lo<hi){
        int mid =(lo+hi)/2;
        if(check(mid,n)){
            // ans=mid;
            hi=mid;
        }
        else
        lo= mid+1;
    }
    return lo;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}