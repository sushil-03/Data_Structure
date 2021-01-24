//word break
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    string str;
    cin>>str;
    vector<string>dictionary;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        dictionary.push_back(s);
    }
    // string dictionary[];
    // for(int i=0;i<n;i++){ 
    //     string s;
    //     cin>>s;
    //     dictionary[i]=s;
    
    // }
    int dp[str.length()];
     int m =sizeof(dp)/sizeof(dp[0]);
     for(int i=0;i<m;i++){
         for(int j=0;j<=i;j++){
             string st2check = str.substr(j,i+1);
             if(dictionary.contains(st2check)){
                if(j>0)
                 dp[i]  += dp[j-1];
                else
                 dp[i] += 1;
             }
         }
     }
}