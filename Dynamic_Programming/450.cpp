// Longest Palindromic Subsequence
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str= "abkccbc";
    int n=str.length();
    int dp[n][n];
    for(int g=0;g<n;g++){
        for(int i=0,j=g;i<n;i++,j++){
            if(g==0){
                dp[i][j]=1;
            }else if(g==1){
                dp[i][j]=str[i]==str[j]?2:1;
            }else{
                if(str[i]==str[j]){
                    dp[i][j]=dp[i+1][j-1]+2;
                }else{
                    dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
                }
            }
        }
    }
    cout<<dp[0][n-1];
}