// Maximum length chain
#include<bits/stdc++.h>
using namespace std;
struct val{
    int first;
    int second;
};

bool comp(struct val a,struct val b){
    return a.second<b.second;
}
int Solve(struct val p[],int n){
    sort(p,p+n,comp);
    int dp[n]={0};
    dp[0]=1;
    int res=1;//because it atleast have 1 length;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[j].second<p[i].first && dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
                res=max(res,dp[i]);
            }
        }
    }
    return res;
}
int main(){
    int n;cin>>n;
    val p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    cout<<Solve(p,n);
}