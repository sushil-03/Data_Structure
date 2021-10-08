#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/
 bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        cout<<str;
        int n=0,m=str.length()-1;
        while(n<=m){
            if(str[n]!=str[m]){
                cout<<str[n]<<" "<<str[m]<<endl;
                return false;

            }
            n++;
            m--;
        }
        return true;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string s = "0P";
cout<<isPalindrome(s);

}