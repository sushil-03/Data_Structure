#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                    NEXT PERMUTATION

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
*/

void nextPermutation(vector<int>&nums){
  int idx=-1,n=nums.size();
  for(int i=n-1;i>0;i--){
    if(nums[i]>nums[i-1]){
      idx=i;
      break;
    }
  }
  if(idx==-1){
    reverse(nums.begin(),nums.end());
    return ;
  }
  int prev=idx;
  for(int i=idx+1;i<n;i++){
    if(nums[i]>nums[idx-1] and nums[i]<=nums[prev]){
      prev=i;
    }
  }
  swap(nums[idx-1],nums[prev]);
  reverse(nums.begin()+idx,nums.end());
  return;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums={1,3,2};

nextPermutation(nums);
for(auto x:nums){
  cout<<x<<" ";
}

}