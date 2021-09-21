/*
You are given an array A consisting of N integers and an integer X. Your goal is to have as many equal integers as possible in the array. To achieve this goal, you can do the following operation:

Choose an index i (1≤i≤N) and set Ai=Ai⊕X, where ⊕ denotes the bitwise xor operation.
Find the maximum number of equal integers you can have in the final array and the minimum number of operations to obtain these many equal integers.


*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  int  n;
  ll x;
  cin>>n>>x;
  long long v[n];
  long long numb=0;
  long long  opr=INT_MAX;

  for( int i=0;i<n;i++)
    cin>>v[i];
  
  unordered_map< ll,ll >m1,m2;
  
  vector<int>test;
  for(ll i=0;i<n;i++){
    m1[v[i]]++;
  }
  
    for(ll i=0;i<n;i++){
        if((v[i]^x)!=v[i])
            m2[(v[i]^x)]++;
                
    }
  
  
        for(ll i=0;i<n;i++){
            if(((m1[v[i]] + m2[v[i]]) >= numb) ){
                if(m1[v[i]]+m2[v[i]]==numb and m2[v[i]]>opr)
                    continue;
                numb=m1[v[i]]+m2[v[i]];
                opr =m2[v[i]];
            }
        }
 
    cout<<numb<<" "<<opr<<endl;

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