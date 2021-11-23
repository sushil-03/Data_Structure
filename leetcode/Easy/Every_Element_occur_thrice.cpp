#include<bits/stdc++.h>
using namespace std;
//Every element occur thrice except one
int main(){
    int n;cin>>n;
    int no;
    int ans[64]={0};
    for(int i=0;i<n;i++){
        cin>>no;
        int j=0;
        while(no>0){
            int last_bit = no&1;
            ans[j]+=last_bit;         
            j++;
            no=no>>1;
        }
    }
    //For getting proper answer we should convert this binary to decimal
    
    int res=0;
    int p=1;
    for(int i=0;i<64;i++){
        ans[i]=ans[i]%3;
        res+=(ans[i]*p);
        p=p<<1;
    }
    cout<<res;
}