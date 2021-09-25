#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Input: palindrome = "abccba"
Output: "aaccba"
Explanation: There are many ways to make "abccba" not a palindrome, such as "zbccba", "aaccba", and "abacba".
Of all the ways, "aaccba" is the lexicographically smallest.



*/
 bool isPalindrome(string s){
      int n=0;
    int m=s.length()-1;
    while(n<m){
        if(s[n]!=s[m])return false;
        n++,m--;
    }
    return true;
}
string breakPalindrome(string pal) {
    int n=pal.length();
    if(n==1)return "";
    string ans=pal;
    for(int i=0;i<n;i++){
        if(ans[i]!='a'){
            ans[i]='a';
            if(isPalindrome(ans)){
                ans[i]=pal[i];
            }else{
                return ans;
            }
        }
    }
    
      for(int i=n-1;i>=0 ;i--){
        if(ans[i]=='a'){
            ans[i]='b';
            if(isPalindrome(ans)){
                ans[i]=pal[i];
            }else{
                return ans;
            }
        }
    }
    return ans;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif



}