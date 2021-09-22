#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
You want the clock to show 0 with as few operations as possible. In an operation, you can do one of the following:

decrease the number on the clock by 1, or
swap two digits (you can choose which digits to swap, and they don't have to be adjacent).


*/

void solve(){
  int n;
  cin>>n;
  string s;cin>>s;
  int ans=s[n-1] - '0';
  for(int i=n-2;i>=0;i--){
    if(s[i]!='0')
      ans+=(s[i]-'0')+1;
  }

  cout<<ans<<endl;
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