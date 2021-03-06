#include<bits/stdc++.h>
using namespace std;
int dp[10000];

int minimize(int n,int x,int y,int z){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];

    int op1,op2,op3;
    op1=op2=op3=INT32_MIN;
    if(n>=x) op1=1+minimize(n-x,x,y,z);
    if(n>=y) op2=1+minimize(n-y,x,y,z);
    if(n>=z) op3=1+minimize(n-z,x,y,z);
    return dp[n]=max(op1,max(op2,op3));
}
int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
   memset(dp,-1,sizeof(dp));
    int ans= minimize(n,x,y,z);
    if(ans<0){
        cout<<"Zero";
    }else{
        cout<<ans<<endl;
    }
    return 0;
}