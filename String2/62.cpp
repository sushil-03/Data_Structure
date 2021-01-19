#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<"1";
    if(n==2) cout<<"11";
    string s ="11";
    for(int i=3;i<=n ;i++){
        string t ="";
        int counter =1;
        for(int j=1;j<=s.length();j++){
            if(s[j]!=s[j-1]){
                t =t+to_string(counter);
                t=t+s[j-1];
                counter=1;
            }
            else{
                counter++;
            }
            
        }
    s=t;
    }
    cout<<s;
}