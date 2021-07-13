//Second repeated  word in a string
#include<bits/stdc++.h>
using namespace std;
string  getAnswer(vector<string> seq){
    unordered_map<string ,int> occ;
    for(int i=0;i<seq.size();i++){
        occ[seq[i]]++;
    }
    int first_max=INT32_MIN;
    int second_max =INT32_MIN;
    for(auto it =occ.begin();it!=occ.end();it++){
        if(it->second > first_max){
            second_max = first_max;
            first_max  =it->second;
        }
        else if(it->second>second_max && it ->second!=first_max){
            second_max =it->second;
        }
    }
    for(auto it =occ.begin();it!=occ.end();it++){
        if(it->second==second_max)
        return it->first;
        // cout<<it->first;
    }
return 0;
}
int main(){
    vector<string>strs;
    for(int i=0;i<6;i++){
        string s;cin>>s;
        strs.push_back(s);
    }
    cout<< getAnswer(strs);
    return 0;
}
