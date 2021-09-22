#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*



*/



int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int t;cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll n= 2 * abs(a-b);
    if(a> n || b> n or c > n){
        cout<<-1<<endl;
    }else{
        ll d = n / 2 + c;
        while(d>n)d -=n;
        cout<<d<<endl;
    }
}


}