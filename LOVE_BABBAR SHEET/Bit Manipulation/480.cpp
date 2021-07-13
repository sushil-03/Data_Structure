// Square of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0)
    n=-n;
    int res=n;
    for(int i=1;i<n;i++){
        res+=n;
    }
    cout<<res;
}