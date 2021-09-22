#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*

A string is called balanced if the number of letters 'a' in it is equal to the number of letters 'b'. For example, strings "baba" and "aabbab" are balanced and strings "aaab" and "b" are not.

Find any non-empty balanced substring 𝑠[𝑙;𝑟] of string 𝑠. Print its 𝑙 and 𝑟 (1≤𝑙≤𝑟≤𝑛). If there is no such substring, then print −1 −1.


*/

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  int len=0;
  for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
      cout<<i+1<<" "<<i+2<<endl;
      return;
    }
  }
cout<<-1<<" "<<-1<<endl;
  return;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int t;cin>>t;
while(t--)
solve();

}