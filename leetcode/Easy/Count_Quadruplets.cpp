#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*

                  Count Number of Quadruplets

*/
int countQuadruplets(vector<int>& nums) {
      sort(nums.begin(),nums.end()); 
      int ans=0;
      int n=nums.size();

      
      for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++)
                if(nums[i]+nums[j]+nums[k]==nums[l]){
                  ans++;
                }
            }
        }
      }
      return ans;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int >v={9,6,8,23,39,23};
  cout<<countQuadruplets(v);
}