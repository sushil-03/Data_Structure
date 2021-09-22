#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
You have a permutation: an array 𝑎=[𝑎1,𝑎2,…,𝑎𝑛] of distinct integers from 1 to 𝑛. The length of the permutation 𝑛 is odd.

Consider the following algorithm of sorting the permutation in increasing order.

A helper procedure of the algorithm, 𝑓(𝑖), takes a single argument 𝑖 (1≤𝑖≤𝑛−1) and does the following. If 𝑎𝑖>𝑎𝑖+1, the values of 𝑎𝑖 and 𝑎𝑖+1 are exchanged. Otherwise, the permutation doesn't change.

The algorithm consists of iterations, numbered with consecutive integers starting with 1. On the 𝑖-th iteration, the algorithm does the following:

if 𝑖 is odd, call 𝑓(1),𝑓(3),…,𝑓(𝑛−2);
if 𝑖 is even, call 𝑓(2),𝑓(4),…,𝑓(𝑛−1).


*/

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int count=0;
   
   while(!is_sorted(a.begin(),a.end())){
       for(int i = count %2 ;i+1<n;i=i+2){
           if(a[i]>a[i+1]){
               swap(a[i],a[i+1]);
           }
       }
       count++;
   }
   cout<<count<<endl;
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