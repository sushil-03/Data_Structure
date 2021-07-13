#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    vector<int>res;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        res.push_back(i);
    }
    if(res.size()==0)
    cout<<"-1";
    else
    cout<<res[0]<<" "<<res[res.size()-1];
    
    return 0;
}