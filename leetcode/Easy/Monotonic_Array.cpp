/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Input: nums = [1,2,2,3]
Output: true

*/

#include <bits/stdc++.h>
using namespace std;

    bool isMonotonic(vector<int>& nums) {
       int flag1=1,flag2=1;
        for(int i=1 ;i<nums.size();i++){
            if(nums[i]>nums[i-1])flag1=0;
            if(nums[i]<nums[i-1])flag2=0;
        }
        return flag1 | flag2;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>v={1,2,2,3};
cout<<isMonotonic(v);

}