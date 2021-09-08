#include <bits/stdc++.h>
using namespace std;
#define ll long long int
  vector<string>res;
  vector<string>input={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    

/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

https://leetcode.com/problems/letter-combinations-of-a-phone-number/

*/

  void helper(string digits,int idx,string s){
      if(idx==digits.size()){
          res.push_back(s);
          return;
      }
      
      //for getting string 
      string v= input[digits[idx]-'0'];
      for(int i=0;i<v.size();i++){
          helper(digits,idx+1,s+v[i]);
      }
  }
  vector<string> letterCombinations(string digits) {
      if(digits.size()==0)return res;    
      
      helper(digits,0,"");
      return res;
  }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
string s="23";
vector<string>ans = letterCombinations(s);
for(int i=0;i<ans.size();i++){
  cout<<ans[i]<<" "; 
}

}