#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                   Wildcard Matching

Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial).

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".


*/
bool isMatch(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<vector<bool>>dp(m+1,vector<bool>(n+1,false));
     // ///
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 and j==0)
                    dp[i][j]=true;
                else if(j==0){
                    if(p[i-1]=='*'){
                        dp[i][j]=dp[i-1][j];
                    }else
                        dp[i][j]=false;
                }else if(i==0){
                    dp[i][j]=false;
                }
                else if(p[i-1]=='*'){
                    dp[i][j]=dp[i-1][j] || dp[i][j-1];
                }else if(p[i-1]==s[j-1] or p[i-1]=='?')
                    dp[i][j]=dp[i-1][j-1];
            }
        }
        return dp[m][n];
        
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


string s = "aa", p = "a";
cout<<isMatch(s,p);
}