#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int mid,int n,int c){
    int time =0;
    int parathas=0;
    for(int i=0;i<c;i++){
        time=a[i];
        int j=2;
        while(time<=mid){
            parathas++;
            time = time+ a[i]*j;
            j++;
        }
        if(parathas>=n)
        return true;
    }
    return  false;
}
int main(){
    int n=10;//number of parathas
    int c=4;//number of cooks
    int arr[]={1,2,3,4};//ranks of cooks
    int low=0;
    int high=1e9;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(solve(arr,mid,n,c)){
            ans=mid;
            high=mid-1;
        }
        else
        low =mid+1;
    }
    cout<<ans<<endl;
    return 0;
}