//Remove adjacent duplicate
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="acaaabbbacdddd";
    int n   =str.size();
    int i=0;
    string res="";
    while(i<n){
        if(str[i]!=str[i+1]){
        res+=str[i];
        // cout<<"1"<<res<<endl;
        i++;
        }
        if(i<n && str[i]==str[i+1]){
            while(str[i]==str[i+1])
            i++;

            i++;
        }

    }
    cout<<res<<endl;
    return 0;

}