#include<bits/stdc++.h>
using  namespace std;
int main(){
    int a[]={1,3,4,9,10,11,12,17,20};
    int n=sizeof(a)/sizeof(a[0]);
    int target=4;
    sort(a,a+n);
    if(n==1){
        cout<<0;    
    }else{
        int ans=n-1;
        for(int i=0;i<n;i++){
            int j=upper_bound(a+i,a+n,a[i]+target)-a-1;//this will find a lesser value than a[i]-target
            ans=min(ans,n-(j-i+1));
        }
        cout<<ans<<endl;
    }
    return 0;
}
