#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

*/
vector<vector<int>>ans;

  void Solve(vector<int>&can,int indx,vector<int>&v,int target){
    if(target==0){
        ans.push_back(v);
        return;
    }
    if(indx==can.size())return;

      int start =indx;
      while(indx < can.size()){
          
          if( indx!=start and can[indx] == can[indx-1]) {
              indx++;
              continue;
          }
          
        if(can[indx]<=target){
            v.push_back(can[indx]);
            Solve(can,indx+1,v,target-can[indx]);
            v.pop_back();
        }else{
            break;
        }
        indx++;
      }
}
 vector<vector<int>> combinationSum2(vector<int>& can, int target) {
         vector<int>v;
        sort(can.begin(),can.end());
        Solve(can,0,v,target);
        return ans;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums = {5,7,7,8,8,10};
int target =8;
vector<vector<int>>ans=combinationSum2(nums,target);


}