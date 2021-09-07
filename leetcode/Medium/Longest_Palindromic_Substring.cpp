#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a string s, return the longest palindromic substring in s.

 
Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.


*/
string longestPalindrome(string s) {
        int n=s.length();
        int dp[n][n];
        int len=0;
        memset(dp,0,sizeof(dp));
        string ans;
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){
                    dp[i][j]=true;
                }else if(g==1){
                    dp[i][j]= s[i]==s[j]?true:false;
                }else{
                    if(s[i]==s[j]){
                        if(dp[i+1][j-1]==true)
                            dp[i][j]=true;
                        else
                            dp[i][j]=false;
                    }else{
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j]){
                    if(j+1-i>len){
                        len = j + 1 - i;
                        ans = s.substr(i,len);
                    }
                }
                    
            }
        }

        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
          }
          cout<<endl;
        }
        return ans;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string s="babad";
cout<<longestPalindrome(s) ;
}