#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
*/

int getValue(char c){
        if(c=='I')return 1;
        if(c=='X')return 10;
        if(c=='V')return 5;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        if(c=='M')return 1000;
        return -1;
    }
    int romanToInt(string s) {
        
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int x=getValue(s[i]);
            if(i+1 < n){
                int y =getValue(s[i+1]);
                if(x>=y)res+=x;
                else{
                    res += y-x;
                    i++ ; 
                }
            }else{
                res+=x;
            }
        }
        return res;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string s = "LVIII";
  cout<<romanToInt(s);
}