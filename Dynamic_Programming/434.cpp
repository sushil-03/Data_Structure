#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>mat(r);
    for(int i=0;i<r;i++){
        mat[i].assign(c,0);
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    int dp[r][c];
    int res=INT32_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==0){
                dp[i][j]=0;
            }else if(i==0||j==0){
                dp[i][j]=1;
            }else{
                dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
            res=max(res,dp[i][j]);
        }
    }
    cout<<res;
    return 0;
}