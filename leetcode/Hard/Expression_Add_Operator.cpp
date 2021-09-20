#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
282. Expression Add Operators

Given a string num that contains only digits and an integer target, return all possibilities to add the binary operators '+', '-', or '*' between the digits of num so that the resultant expression evaluates to the target value.

Example 1:

Input: num = "123", target = 6
Output: ["1*2*3","1+2+3"]




*/
 vector<string> ans;
  string getString(string s,int i,int j){
    string a="";
    for(int k=i;k<j;k++){
      a+=s[k];
    }
    return a;
  }  
    void dfs(int i,string res, int res_so_far, int prevNum,string s,int target){
        
        if(i==s.size()){
            if(res_so_far == target){
                ans.push_back(res);
            }
            return ;
        }
        for(int j=i;j<s.size();j++){
            if(j>i and s[i]=='0')
                break;

            // int currNum= stoi(s.substr(i,j+1));
             int currNum= stoi(getString(s,i,j+1));
           // cout<<"CURR"<<currNum<<endl;
            if(i==0){
                dfs(j+1,res + to_string(currNum),currNum,currNum,s,target);
            }else{
            dfs(j+1,res+" + "+ to_string(currNum),res_so_far+currNum,currNum,s,target);
            dfs(j+1,res+" - "+ to_string(currNum),res_so_far-currNum,-currNum,s,target);
            dfs(j+1,res+" * "+ to_string(currNum),res_so_far-prevNum+prevNum*currNum,currNum*prevNum,s,target);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        
        dfs(0,"",0,0,num,target);
            return ans;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<string>s=addOperators("105",6);
for(auto x:s){
  cout<<x<<" "<<endl;
}

}