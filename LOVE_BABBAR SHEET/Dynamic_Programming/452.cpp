// Longest Palindromin Substring
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abccbc";
    int n=str.length();
    bool dp[n][n];
    int ans=0;
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]=true;
            }else if(g==1){
                dp[i][j]=str[i]==str[j]?true:false;
            }else{
                if(str[i]==str[j] && dp[i+1][j-1]==true){
                    dp[i][j]=true;
                }else 
                dp[i][j]=false;
            }

            if(dp[i][j]){
                ans=g+1;
            }
        }
    }
    cout<<ans;
}