#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2


*/
int searchInsert(vector<int>& nums, int target) {
        
        int l=0,r=nums.size()-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target){
                l=mid+1;
            }else
                r=mid-1;
        }
        return l;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums = {1,3,5,6};
int target = 5;  
cout<<searchInsert(nums,target);

}