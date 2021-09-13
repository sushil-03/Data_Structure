#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Input: s = "{[]}"
Output: true


*/
 bool isValid(string s) {
        int len  =s.size();
        stack<char>st;
        for(int i=0;i<len;i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
            }else if(s[i]==']' and  !st.empty()){
                if(  st.top()!='[')
                    return false;
                else
                    st.pop();
            }else if(s[i]=='}' and  !st.empty() ){
                if(st.top()!='{')
                    return false;
                else
                    st.pop();
            }else if(s[i]==')' and  !st.empty() ){
                if(st.top()!='(')
                    return false;
                else
                    st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.empty()==true;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
string s = "{[]}";
cout <<isValid(s);


}