#include<bits/stdc++.h>
using namespace std;
int Solve(int n,int c){
    int fact[n+1];
    fact[0]=fact[1]=1;
    for(int i=2;i<=n;i++){
        fact[i]=fact[i-1]*i;
    }
    return fact[n]/fact[n-c];
}
int main(){
    int n=10;
    int r=3;
    cout<<Solve(n,r);
}