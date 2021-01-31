//Make string Palindrome
#include<bits/stdc++.h>
using namespace std;
bool isPalindrom(string s){
int n= s.length();
for(int i=0,j=n-1;i<n;i++,j--){
    if(s[i]!=s[j])
    return false;
}
    return true;
}
int main(){
    string str="AACECAAAA";
    int count=0;
    int flag=0;
    while(str.length()>0){
        if(isPalindrom(str)){
            flag=1;
            break;
        }
        else{
            count++;
            str.erase(str.begin()+str.length()-1);
        }
    }
    if(flag){
    cout << count << endl;
    }
    return 0;

}