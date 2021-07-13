// Longest Common prefix
#include<bits/stdc++.h>
using namespace std;
string CommonPrefix(string prefix,string check){
    int n =prefix.length();
    int m =check.length();
    string result;
    for(int i=0,j=0;i<n&&j<m ;i++,j++){
        if(prefix[i]!=check[j]) 
        break;
        if(prefix[i]==check[j])
        result.push_back(check[i]);
    }
    return result;
}
string Root(string s[],int n){
    string prefix =s[0];
    for(int i=1;i<n;i++){
        prefix = CommonPrefix(prefix,s[i]);
    }
return prefix;
}
int main(){
       string arr[] = {"geeksforgeeks", "geeks", 
                    "geek", "geezer"}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    string ans = Root(arr,n);

    if(ans.length())
    cout<<ans<<endl;
    else{
        cout<<"Not have one";
    }
    
    return 0;
} 
