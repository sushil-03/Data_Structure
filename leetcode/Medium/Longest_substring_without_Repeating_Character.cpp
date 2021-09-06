#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


*/

int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        int l=0,r=0;
        int ans=0;
        map<char,int>mp;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            ans =max(ans,r-l+1);
            r++;
        }
        return ans;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string s="abcabcbb";
cout<< lengthOfLongestSubstring(s);
}