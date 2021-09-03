/*



*/

#include <bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  
  vector<int>odd,even;
  for(int i=0;i<n;i++){
    if(a[i]%2==0)even.push_back(a[i]);
    else
      odd.push_back(a[i]);
  }
  int i=0;
  while( !even.empty() and !odd.empty()){
    if(!even.empty())
    a[i++]=even.back();even.pop_back();
    
    if(!odd.empty())
    a[i++]=odd.back();odd.pop_back();
  }
  while(!even.empty()){
    a[i++]=even.back();
    even.pop_back();
  }
  while(!odd.empty()){
    a[i++]=odd.back();odd.pop_back();

  }

int res=0;
  for(int i=0;i<n;i++){
    res+= (a[i]+i+1)%2;
  }
  cout<<res<<endl;


}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int t;cin>>t;
while(t--){
  solve();
}

}