#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                  GENERATE PARANTHESIS
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

*/
  vector<string>ans;
    
    void Solve(string s,int l,int r){
        if(l==0 and r==0){
            ans.push_back(s);
        }
        if(l!=0){
            Solve(s+'(' ,l-1,r);
        }
        if(l!=r){
            Solve(s+')',l,r-1);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        Solve("",n,n);
        return ans;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


vector<string>ans=generateParenthesis(3);
for(auto s:ans){
  cout<<s<<endl;
}
}