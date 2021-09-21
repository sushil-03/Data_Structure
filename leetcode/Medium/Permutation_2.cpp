#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                                    PERMUTATION 2(Only UNique)
Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

Example 1:

Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]


*/

  vector<vector<int>>ans;
    
  void Solve(vector<int>&nums,int l,int r){
    if(l==r){
        if(find(ans.begin(),ans.end(),nums)==ans.end()){
            ans.push_back(nums);
        }
          return ;
    }
    for(int i=l;i<=r;i++){
        swap(nums[i],nums[l]);
        Solve(nums,l+1,r);
        swap(nums[i],nums[l]);
    }
      
  }
vector<vector<int>> permuteUnique(vector<int>& nums) {
    Solve(nums,0,nums.size()-1);
    return ans;
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


vector<int>nums={1,2,3};
vector<vector<int>>ans = permuteUnique(nums);

}