#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]


*/
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
      
        for(auto x:mp){
          int sz=x.second.size();
          vector<string>sa;
          for(int i=0;i<sz;i++){
            sa.push_back(x.second[i]);
          }
          ans.push_back(sa);
        }
        return ans;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


vector<string>s={"eat","tea","tan","ate","nat","bat"};
vector<vector<string>>ans = groupAnagrams(s);

for(int i=0;i<ans.size();i++){
  for(int j=0;j<ans[i].size();j++){
    cout<<ans[i][j]<<" ";
  }
  cout<<endl;
}
}