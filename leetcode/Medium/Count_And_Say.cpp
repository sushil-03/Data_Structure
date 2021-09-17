#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                            COUNT AND SAY

Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"

*/

string countAndSay(int n) {
        if(n==1)return"1";
        if(n==2)return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string temp="";
            int count =1;
            for(int j=1;j<=s.length();j++){
                if(s[j]!=s[j-1]){
                    temp +=to_string(count);
                    temp +=s[j-1];
                    count=1;
                }else{
                    count++;
                }
            }
            s=temp;
        }
        return s;
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
cout<<countAndSay(4);


}