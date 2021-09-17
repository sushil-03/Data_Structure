#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

*/
vector<vector<int>>ans;
    
void Solve(vector<int>&can,int indx,vector<int>&v,int target){
    if(target==0){
        ans.push_back(v);
        return;
    }
    if(target<0)return;
    if(indx==can.size())return;
    
    v.push_back(can[indx]);
    Solve(can,indx,v,target-can[indx]);
    v.pop_back();
    Solve(can,indx+1,v,target);
}
vector<vector<int>> combinationSum(vector<int>& can, int target) {
    vector<int>v;
    Solve(can,0,v,target);
    return ans;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int>can={2,3,6,7};
int target=7;
vector<vector<int>>ans=combinationSum(can,target);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[0].size();j++){
      cout<<ans[i][j]<<" ";
    }
  }
}