#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ma=arr[0];
    int mi=arr[0];
    int ans=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0)
        swap(ma,mi);

        ma=max(arr[i],ma*arr[i]);
        mi=min(arr[i],mi*arr[i]);
        
        if(ans<ma){
            ans=ma;
        }
    }
    cout<<ans;
    return 0;
}