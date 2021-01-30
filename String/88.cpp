//this code only display size of the string 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="GEEKSGEEKSFOR";
    // cin>>str;
    
    set<char>st;
    for(int i=0;i<str.length();i++)st.insert(str[i]);
    int n=st.size();
    unordered_map<char,int>m;
    int i=0,j=1;
    m[str[i]]++;
    int count=1;
    int ans =INT32_MAX;
    while(i<=j  && j<str.length()){
        if(count<n){
        if(m[str[j]]==0) count++;
        m[str[j]]++;
        j++;
        }
        else if(count ==n){
            ans =min(ans,j-i);
            if(m[str[i]]==1) count--;
            m[str[i]]--;
            i++;
        }
        while(count==n){

            ans =min(ans,j-i);
            if(m[str[i]]==1) count--;
            m[str[i]]--;
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
