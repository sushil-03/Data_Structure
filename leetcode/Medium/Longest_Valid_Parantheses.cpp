#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
              LONGEST VALID PARANThESIS



*/
int longestValidParentheses(string s) {
    
    int n = s.length();
    stack<int> st;
    st.push(-1);
    int len = 0;
    int maxlen =0;
    for(int i =0;i<n;i++)
    {
        if(s[i] == '(')
            st.push(i);
        if(s[i] == ')')
        {
            st.pop();
            if(st.empty())
                st.push(i);
            len = i - st.top();
            maxlen = max(maxlen,len);
        }
    }
    return maxlen;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string s="(()()";
cout<<longestValidParentheses(s);

}