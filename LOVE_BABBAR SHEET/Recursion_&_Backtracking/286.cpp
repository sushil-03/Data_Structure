// Combination key
#include<bits/stdc++.h>
using namespace std;
void Combine(vector<int>&ar,int sum,vector<vector<int>>&res,vector<int>temp,int idx){
    if(sum<0)return;
    if(sum==0){
        res.push_back(temp);
        return;
    }
    for(int i=idx;i<ar.size();i++){
        if(sum-ar[idx]>=0){
            temp.push_back(ar[i]);
            sum=sum-ar[i];
            Combine(ar,sum,res,temp,i);
            sum=sum+ar[i];
            temp.pop_back();
        } 
    }
}

vector<vector<int>>Solve(vector<int>&ar,int sum){
    sort(ar.begin(),ar.end());
    ar.erase(unique(ar.begin(),ar.end()),ar.end());
    vector<vector<int>>res;
    vector<int>temp;    
    Combine(ar,sum,res,temp,0);
    return res;

}
int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum;
    cin>>sum;
    vector<vector<int>>result=Solve(ar,sum);
    if(result.empty()){
        cout<<"EMPTY";
        return 0;
    }
    for(int i=0;i<result.size();i++){
        cout<<"(";
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j];
        }
        cout<<")";
    } 
}