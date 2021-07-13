#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res;
    for(int i=1;i<=n;i++){
        if(arr[i-1]==i)
        res.push_back(i);
    }
    if(res.size()==0){
        cout<<"-1";
        return 0;
    }
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}