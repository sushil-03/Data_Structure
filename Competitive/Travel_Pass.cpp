/*
Chef is going on a road trip and needs to apply for inter-district and inter-state travel e-passes. It takes A minutes to fill each inter-district e-pass application and B minutes for each inter-state e-pass application.

His journey is given to you as a binary string S of length N where 0 denotes crossing from one district to another district (which needs an inter-district e-pass), and a 1 denotes crossing from one state to another (which needs an inter-state e-pass).

Find the total time Chef has to spend on filling the various forms.


*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,a,b;
  cin>>n>>a>>b;
  string s;
  cin>>s;
  int state=0;
  int district=0;
  for(int i=0;i<n;i++){
    if(s[i]=='0')
      district++;
    else 
      state++;
  }
  int ans = (a * district)+(b*state);
  cout<<ans<<endl;
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;
while(t--)
solve();

}