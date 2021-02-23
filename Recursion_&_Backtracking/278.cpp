#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    int count=0;
    for(const char& c:s){
        if(c=='(')count++;
        if(c==')'){
            if(count==0)return false;
            else
            count--;
        }
    }
    return count == 0;
}

void helper(string str,int start,int ctrL,int ctrR,vector<string>ans){
    if(ctrL==0 && ctrR==0){
        if(isValid(str)){
            cout<<str<<endl;
            ans.push_back(str);
            }
    }
    for(int i=start;i<str.length();i++){
        if(i>start && str[i]==str[i-1])
        continue;
        if(str[i]=='('&& ctrL>0){
            string ss=str.substr(0,i)+str.substr(i+1);
            helper(ss,i,ctrL-1,ctrR,ans);
        }
        if(str[i]==')' && ctrR>0){
            string ss =str.substr(0,i)+str.substr(i+1);
            helper(ss,i,ctrL,ctrR-1,ans);
        }
    }
}    


vector<string>removeInvalidParthesis(string str){
    int ctrR=0;
    int ctrL=0;
    for(const char& c :str){
        if(c=='(')ctrL++;
        if(c==')'){
            if(ctrL>0)ctrL--;
            else
            ctrR++;
        }
    }
    vector<string>ans;
    helper(str,0,ctrL,ctrR,ans);
    return ans;
}
int main(){
    string str;
    cin>>str;
    vector<string> ans;
     removeInvalidParthesis(str);
    
    return 0;
}


















