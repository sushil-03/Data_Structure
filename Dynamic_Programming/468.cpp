// String is interleaved (using recurssion and memoziation)
#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
bool interleaved(string A,string B,string C,int n,int m,int len){
    if(len==0){
        return 1;
    }
    if(dp[n][m]!=-1)return dp[n][m];
    int a=0,b=0;
    if(n-1>=0 && A[n-1]==C[len-1])
    a=interleaved(A,B,C,n-1,m,len-1);
    if(m-1>=0 && B[n-1]==C[len-1])
    b=interleaved(A,B,C,n,m-1,len-1);
    return dp[n][m]=a||b;
}
int main(){
    string A,B,C;
    cin>>A>>B>>C;
    int n=A.length();
    int m=B.length();
    int len=C.length();
    dp[n][m];
    memset(dp,-1,sizeof(dp));
    if(interleaved(A,B,C,n,m,len)){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}