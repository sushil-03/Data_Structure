// Count total set bit till n
#include<bits/stdc++.h>
using namespace std;
int power(int n){
    int x=0;
    while((1<<x)<=n){
        x++;
    }
    return x-1;
}
int Solve(int n){
    if(n==0)return 0;
    int x=power(n);
    int tpr=x*(1<<(x-1));
    int rem=n-(1<<x)+1;
    int nxt=n-(1<<x);
    int ans =tpr+rem+Solve(nxt);
    return ans;
}
int main(){
    int n=4;
    cout<<Solve(n);
    return 0;
}