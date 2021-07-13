// Print all Possible palindromic Partioning
#include<bits/stdc++.h>
using namespace std;
bool isPalindrom(string s){
    int l=0;
    int r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r])return false;
    l++;r--;
    }
    return true;
}
void Solve(string str,string asf){
    if(str.length()==0){
        cout<<asf;
        return;
    }
    for(int i=0;i<str.length();i++){
        string prefix=str.substr(0,i+1);
        string rsq=str.substr(i+1);
        if(isPalindrom(prefix)){
            Solve(rsq,asf +"("+prefix+")" );
        }
    }
}
int main(){
    string str;
    cin>> str;
    Solve(str,"");
}