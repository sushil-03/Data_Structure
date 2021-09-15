#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                  CREATE ALL PERMUTATION

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/
vector<vector<int>>ans;
  int n;
  void Solve(vector<int>&nums,int l,int r){
      if(l==r){
          ans.push_back(nums);
          return ;
      }
      for(int i=l;i<=r;i++){
          swap(nums[i],nums[l]);
          Solve(nums,l+1,r);
          swap(nums[i],nums[l]); 
      }
      return;
  }
vector<vector<int>> permute(vector<int>& nums){
        n=nums.size();
        Solve(nums,0,n-1);
        
        return ans;
    }



int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

}