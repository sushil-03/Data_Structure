#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*



*/
   int ans=0;
    int getUnique(string s){
        vector<int>freq(26,0);
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq[i]>1)return -1;
        }
        return s.length();
    }
    
    void recursive(vector<string>& arr,int i,string s){
        if(s.length()>26)return;
        if(i==arr.size()){
            ans=max(ans,getUnique(s));
            return;
        }
        
        recursive(arr,i+1,s+arr[i]);
        recursive(arr,i+1,s);
    }
    int maxLength(vector<string>& arr) {
        
        recursive(arr,0,"");
        return ans;
    }



int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<string>s={"cha","r","act","ers"};
cout<<maxLength(s);


}