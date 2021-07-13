// Count Dearrangement(no element apper at its position )Find number of arrangement
#include<bits/stdc++.h>
using namespace std;
// recurssion
// int Solve(int n){
    // if(n==1)return 0;
    // if(n==2)return 1;
//            it has n-1 possiblities
    // return (n-1)*(Solve(n-1)+Solve(n-2));
// }                  again check the swap number   + remaining checking      

int Solve(int n){
    int dp[n+1]={0};
    dp[1]=0;
    dp[2]=1;

    for(int i=3;i<=n;i++){
        dp[i] = (i-1)*(dp[i-1]+dp[i-2]);
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}