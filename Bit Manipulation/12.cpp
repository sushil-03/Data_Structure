// XOR   of sum of all Pair in an Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int res=0;
    for(int i=0;i<n;i++){
        res^=(2* a[i]);
    }
    cout<<res<<endl;
}