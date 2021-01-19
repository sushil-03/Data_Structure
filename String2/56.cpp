//Reverse a string
#include<bits/stdc++.h>
#include<string>
using  namespace std;
int main(){
    string str;
    cin>>str;
    int n =str.size();
    // cout<<n;
    for(int i=0;i<n/2;i++){
        char temp =str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }
    cout<<str<<endl;
}