// Job Scheduling 
#include<bits/stdc++.h>
using namespace std;
const bool comp(vector<int>a,vector<int> b){
    return a[1]<b[1];   
}
int Solve(int n,vector<int>& start,vector<int> &end,vector<int>& profit){
    vector<vector<int> >v(n);
    for(int i=0;i<n;i++){
        int x =start[i];
        int y= end[i];
        int z=profit[i];    
        // v.push_back({x,y,z});
        v[i]={x,y,z};
        }
    sort(v.begin(),v.end(),comp);
    int dp[n];
    dp[0]=v[0][2];//profit of first
    for(int i=1;i<n;i++){
        int inc=v[i][2];
        int last=-1;
        int low =0;
        int high =i-1;
        while(low<=high){
            int mid =(low+high)/2;
            if(v[mid][1]<=v[i][0]){
                last =mid;
                low =mid+1;
            }
            else
            high =mid-1;
        }
        if(last!=-1)
            inc += dp[last];
            int exc = dp[i-1];
            dp[i] = max(inc,exc);
        
    }
    return dp[n-1];


}
int main(){
    int n;
    cin>>n;
    vector<int>start(n);
     vector<int>end(n);
      vector<int>profit(n);
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        start[i]=x;
        end[i]=y;
        profit[i]=z;
    }
    cout<<Solve(n,start,end,profit);
    return 0;
}