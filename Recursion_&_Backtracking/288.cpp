#include<bits/stdc++.h>
using namespace std;
void Solve(string str,string ans,vector<string>&res){
    if(str.length()==0){
        res.push_back(ans);
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string lp=str.substr(0,i);
        string rp=str.substr(i+1);
        Solve(lp+rp,ans+ch,res);
    }

}
int main(){
    string str;
    cin>>str;
    vector<string>res;
    Solve(str,"",res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}