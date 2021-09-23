#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*



*/
long long maxPoints(vector<vector<int>>& points) {
     long long ans =0;
        int r=points.size();
        int c=points[0].size();
        vector<vector<long long >>dp(r,vector<long long>(c));

      for(int j=0;j<c;j++){
            dp[0][j]= points[0][j];
         }
        
       for(int i=1;i<r;i++){
            vector<long long>left(c);
            vector<long long>right(c);
           vector<long long>&prev= dp[i-1];
           
           left[0]=prev[0];
           for(int k=1;k<c;k++){
               left[k] =max(prev[k],left[k-1]-1);
           }
           
           right[c-1]=prev[c-1];
           for(int k=c-2;k>=0;k--){
               right[k] =max(prev[k],right[k+1]-1);
           }
           
             for(int j = 0; j < c; j++){
                dp[i][j] = max(left[j],right[j])+points[i][j];
            }
       }



    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }        
         for(int j=0;j<c;j++){
           ans=max(ans,dp[r-1][j]);
         }
        return ans;        
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<vector<int>>points = {{1,5},{2,3},{4,2}};
cout<<maxPoints(points);

}