#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.

Input: text = "loonbalxballpoon"
Output: 2
*/

int maxNumberOfBalloons(string text) {
        int n=text.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[text[i]]++;
        }
        string s="balloon";
        int ans=INT_MAX;
        if(mp['l']<2 or mp['o']<2){
            return 0;
        }else{
            mp['l']=mp['l']/2;
            mp['o']=mp['o']/2;
        }
        for(int i=0;i<s.length();i++){
            if(mp['l'])
            ans=min(ans,mp[s[i]]);
        }
        return ans;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif



}