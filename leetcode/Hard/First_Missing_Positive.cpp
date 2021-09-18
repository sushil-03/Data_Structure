#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                           First Missing Positive

Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

Input: nums = [7,8,9,11,12]
Output: 1

*/
int SecondWay_firstMissingPositive(vector<int>&nums){
  int n=nums.size();
  for(int i=0;i<n;i++){
    while(nums[i]>0 and nums[i]<n and nums[nums[i]-1]!=nums[i]){
      swap(nums[i],nums[nums[i]-1]);
    }
  }
  for(int i=0;i<n;i++){
    if(nums[i]!=i+1){
      return i+1;
    }
    return n+1;
  }
}
 int OneWay_firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        return nums.size()+1;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums={7,8,9,11,12};
cout<<OneWay_firstMissingPositive(nums);
cout<<SecondWay_firstMissingPositive(nums);

}