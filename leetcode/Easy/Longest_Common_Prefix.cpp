#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                         Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

 string longestCommonPrefix(vector<string>& strs) {
        string temp =strs[0];
        string ans  ;
        for(int i=0;i<temp.size();i++){
               for(int  j=1;j<strs.size();j++){
                   if(temp[i]!=strs[j][i]){
                      temp.erase(temp.begin()+i,temp.end());
                   }
               }
        }
        return temp;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<string>str={"flower","flow","flight"};
cout<<longestCommonPrefix(str);


}