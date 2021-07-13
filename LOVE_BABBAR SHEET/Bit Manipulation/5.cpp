// Gray code
#include<bits/stdc++.h>
using namespace std;
vector<string>Gray_Code(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string>rres=Gray_Code(n-1);
    vector<string>mres;
    for(int i=0;i<rres.size();i++){
        string s=rres[i];
        mres.push_back("0"+s);
    }
   for(int i=rres.size()-1;i>=0;i--){
         string s=rres[i];
        mres.push_back("1"+s);
    }
    return mres;
}
int main(){
    int n=3;
    vector<string>ans=Gray_Code(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}