#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                    BASIC CALCULATOR
Given a string s representing a valid expression, implement a basic calculator to evaluate it, and return the result of the evaluation.

Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().
Input: s = "(1+(4+5+2)-3)+(6+8)"
Output: 23
 


*/

 int calculate(string s) {
        int sign=1;
        int ans=0;
        int len=s.length();
        stack<int>st;
        for(int i=0;i<len;){
            if(s[i]>='0' and s[i]<='9'){
                long num=0;
                   while(i<len and s[i]>='0' and s[i]<='9'){
                       num = (num *10) +s[i] -'0';
                       i++;
                   } 
                ans +=num*sign;
            }else if(s[i]=='+'){
                sign =1;
                i++;
            }else if(s[i]=='-'){
                sign = -1;
                i++;
            }else if(s[i]=='('){
                st.push(ans);
                st.push(sign);
                ans=0;
                sign=1;
                i++;
            }else if(s[i]==')'){
                ans= ans*st.top();
                st.pop();
                ans+=st.top();
                    st.pop();
                i++;
            }else
                i++;
        }
        return ans;
            
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string  s = "(1+(4+5+2)-3)+(6+8)";
cout<<calculate(s);

}