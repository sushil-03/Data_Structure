/*
Given a string s and an array of strings words, determine whether s is a prefix string of words.

A string s is a prefix string of words if s can be made by concatenating the first k strings in words for some positive k no larger than words.length.

Return true if s is a prefix string of words, or false otherwise.

*/


#include <bits/stdc++.h>
using namespace std;

bool isPrefixString(string s, vector<string>& words) {
        int n=s.length();
        int m=words.size();
        int i=0,j=0;
            string str="";
        while(j<m){
            str+=words[j];
            cout<<str<<" ";
            if(str==s)return true;
            j++;
        }
        return false    ;
}



int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


string s="iloveleetcode";
vector<string>words={"i","love","leetcode","apples"};
  if(isPrefixString(s,words)){
    cout<<"True";
  }else{
    cout<<"False";
  }
}