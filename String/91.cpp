#include<bits/stdc++.h>
using namespace std;
vector<vector<string> >Anagram(vector<string>& str_list){
map<string,vector<string> >m;
for(int i =0;i <str_list.size();i++){
    string s =str_list[i];
    sort(s.begin(),s.end());
    m[s].push_back(str_list[i]);
}
vector<vector<string> > ans(m.size());
int idx=0;
for(auto x:m){
    auto v =x.second;
    for(int i=0;i<v.size();i++){
        ans[idx].push_back(v[i]);
    }
    idx++;
}
return ans;
}

int main(){
    int n;cin>>n;
    vector<string> string_list;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        string_list.push_back(s);
    }
    vector<vector<string> >result= Anagram(string_list);
    // sort(result.begin(),result.end());
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }    
return 0;
}