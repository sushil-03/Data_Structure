#include<bits/stdc++.h>
using namespace std;
int Solve(int n, string str){
    int count=0;
    unordered_map<char,int>m;
    for(int i=0;i<str.length();i++){
        if(count<=n){
            if( (m[str[i]] == 0) ){
                count++;
                m[str[i]]=1;
            }
            else{
                count--;
                m[str[i]]=0;
            }
        }
        if(count>n){
            return 0;
        }
    }
    return 1;
}
int main(){
    cout<<Solve(1,"ABCBCADEED");
    return 0;
}