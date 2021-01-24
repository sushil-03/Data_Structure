// Longest Palindromic substring
#include<bits/stdc++.h>
using namespace std;
void printString(string s,int start,int end){
    for(int i=start;i<=end;i++){
        cout<<s[i];
    }
}

void Solve(string s){
    int l,h;
    int start =0;
    int end =1;
    for(int i=1;i<s.length();i++){
        l=i-1;
        h=i;
        while(l>=0&& h<s.length() &&s[l]==s[h]){
            //even substring 
            if(h-l+1>end){
                start =l;
                end = h-l+1;
            }
            l--;h++;
        }
    l=i-1;
    h=i+1;
    while(l>=0&&h<s.length() &&s[l]==s[h]){
        // odd substring7
        if(h-l+1>end){
            start =l;
            end =h-l+1;
        }
        h++;l--;
    }
    }
    printString(s,start,start+end-1);
}
int main(){
    string str;
    cin>>str;
    Solve(str);
    return 0;
}