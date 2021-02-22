#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>mp;
vector<string>res;
bool iscur(string s){
    return mp.find(s)!=mp.end();
}

void Solve(int i,int n,string s,string cur,string ans){
    cur +=s[i];
    if(i==n){
        if(iscur(cur)){
            ans+=cur;
            res.push_back(ans);
        }
        return;
    }
    if(iscur(cur)){
        Solve(i+1,n,s,"",ans+cur+" ");
    }
        Solve(i+1,n,s,cur,ans);
    return;
}

int main(){
    int dict;
    cin>>dict;
    string s;
    for(int i=0;i<dict;i++){
        cin>>s;
        mp[s]++;
    }
    cin>>s;
    Solve(0,s.length()-1,s,"","");
    if(res.empty()){
        cout<<-1;
    }else{
        for(auto it=res.begin();it!=res.end();it++){
            cout<<"("<<*it<<")";
        }
        cout<<endl;
    }
}