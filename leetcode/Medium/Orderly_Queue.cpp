#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                          ORDERLY QUEUE
          
You are given a string s and an integer k. You can choose one of the first k letters of s and append it at the end of the string..

Return the lexicographically smallest string you could have after applying the mentioned step any number of moves.

 
Input: s = "cba", k = 1
Output: "acb"

SOL :if k==1 then we can only rotate the whole string one and find 
      the  lexicographically largest string
    if(k>1) the after some step string will come the largest string which we can find be sorting 
*/

string orderlyQueue(string s, int k) {
        if(k==0)return s;
        else if(k>1){
            sort(s.begin(),s.end());
            return s;
        }else if(k==1){
            string ans=s;
            int  n=s.length();
            for(int i=1;i<n;i++){
                string newOne = s.substr(i)+s.substr(0,i);
                if(ans.compare(newOne)>0){
                    ans=newOne;
                }
            }
            return ans;
        }
        return s;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string s="cba";
int k=1;
cout<<orderlyQueue(s,k);

}