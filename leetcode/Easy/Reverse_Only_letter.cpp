#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.
Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"


*/
   string Efficient_reverseOnlyLetter(string s) {
             int n=s.length();
        int l=0,r=n-1;  
        while(l<r){
            if( !isalpha(s[l])){
                l++;
            }else if( !isalpha(s[r])){
                r--;
            }else{
                swap(s[l],s[r]);
                l++,r--;
            }
    }
        return s;
    }
string MYMETHOD_reverseOnlyLetters(string s) {
    string ans="";
    int n=s.length()-1;
    for(int i=n;i>=0;i--){
        int x=int(s[i]);    
          if( x>=65 and x<=90 or x>=97 and x<=122){
            ans+=s[i];
        }
    }
    int k=0,l=0;
    string fnal="";
    for(int i=0;i<=n;i++){
        int y=s[i];
        if(y>=33 and y<65 or y>=91 and y<=96){
            fnal+=s[i];
        }else{
          fnal+=ans[l++];
        }
        
    }

      return fnal;   
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

string s="Test1ng-Leet=code-Q!";
//        QedocteeLgntseT
//        Qedo1ct-eeLg=ntse-T!
string t=MYMETHOD_reverseOnlyLetters(s);
string t=Efficient_reverseOnlyLetter(s);
cout<<t<<endl;

}