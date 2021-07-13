// count of all Palindromic Subsequence
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abccbc";
    int n=str.length();
    int dp[n][n];
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]=1;
            }else if(g==1){
                dp[i][j]= str[i]==str[j]?3:2;
            }else{
                if(str[i]==str[j]){
                    dp[i][j]=dp[i+1][j]+dp[i][j-1]+1;
                }else{
                    dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
                }
            }
        }
    }
    cout<<dp[0][n-1];
}