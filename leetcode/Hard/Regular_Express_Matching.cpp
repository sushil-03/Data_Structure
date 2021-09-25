#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                  Regular Expression Matching

Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character.​​​​
'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial).

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
*/

bool isMatch(string s, string p) {
    int sl=s.length() ;
    int pl=p.length();
    
    vector<vector<bool>>dp(pl+1,vector<bool>(sl+1,false));

    
    for(int i=0;i<=pl;i++){
        for(int j=0;j<=sl;j++){
            if(i==0 and j==0)
                dp[i][j] = true;
            else if(i==0)
                dp[i][j] = false;
            else if(j==0){
                char ch = p[i-1];
                if(ch=='*')
                    dp[i][j] = dp[i-2][j];
                else
                    dp[i][j] = false;
            }else{
                char cp = p[i-1];
                char cs = s[j-1];
                
                if(cp==cs or cp=='.'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(cp=='*'){
                    dp[i][j]=dp[i-2][j];//when star remove with the previous element
                    char temp = p[i-2];
                    
                    if(temp==cs or temp=='.'){
                        dp[i][j] = dp[i][j] || dp[i][j-1];//j-1 means if mis* satisfy mis then it will also satisfy this
                    }
                }else{
                    dp[i][j]=false;
                }
            }
        }
    }
    return dp[pl][sl];
  }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


string s = "aa", p = "a";
cout<<isMatch(s,p);

}