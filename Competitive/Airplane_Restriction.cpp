/*
Chef has 3 bags that she wants to take on a flight. They weigh A, B, and C kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.

The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D kgs and the weight of the bag which is carried cannot exceed E kgs. Find if Chef can take all the three bags on the flight.


*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int D,E;
  cin>>D>>E;
  if((a+b<=D and c<=E)|| (a+c<=D and b<=E)||(b+c<=D and a<=E)){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;

while(t--){
  solve();
}
}