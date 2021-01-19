#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_map<char,int> map;
    for(int i=0;i<str.length();i++){
        map[str[i]]++;
    }
    for(auto it:map){
        if(it.second >1){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}