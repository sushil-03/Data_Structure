#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int n=str1.length();
    int m=str2.length();
    int o=str3.length();
    int dp[n+1][m+1][o+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            for(int k=0;k<=o;k++){
                if(i==0||j==0||k==0)
                dp[i][j][k]=0;
                else if(str1[i-1]==str2[j-1]&& str1[i-1]==str3[k-1]){
                    dp[i][j][k]=1+dp[i-1][j-1][k-1];
                }else{
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }
    cout<<dp[n][m][o];
    return 0;
}