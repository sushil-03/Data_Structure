// Painting Fence Problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    long long same=k;
    long long diff=k*(k-1);
    long long tot=same+diff;
    for(int i=3;i<=n;i++){
        same=diff;
        diff=tot*(k-1);
        tot=same+diff;
    }
    cout<<tot<<endl;
}