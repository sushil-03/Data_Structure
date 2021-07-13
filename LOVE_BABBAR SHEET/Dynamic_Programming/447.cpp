// Word Break
#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>mp;
vector<string>ss;

bool iscur(string str){
    return mp.find(str)!=mp.end();
}
void Solve(string line,int i,int n,string curr,string ans){
    curr+=line[i];
    if(i==n){
        if(iscur(curr)){
        
            ans+=curr;
            ss.push_back(ans);
        }
        return;
    }
    if(iscur(curr)){
        Solve(line,i+1,n,"",ans+curr+" ");
    }
    Solve(line,i+1,n,curr,ans);
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<string>dict;
    mp.clear(),ss.clear();
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }

    string line;
    cin>>line;

    Solve(line,0,line.length()-1,"","");
    if(ss.size()==0){
        cout<<0;
    }else{
        cout<<1;
    }

}