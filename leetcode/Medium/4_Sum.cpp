#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                                            4Sum
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.


Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

*/

 vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int sum = nums[i]+nums[j];
                int remT = target-sum;
                
                int l=j+1;
                int r=n-1;
                while(l<r){
                    if(nums[l]+nums[r]==remT){
                        vector<int>v(4);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[l];
                        v[3]=nums[r];
                        ans.push_back(v);
                        while(nums[l]==v[2] and l<r){
                            l++;
                        }
                        while(nums[r]==v[3] and l<r)
                            r--;
                    }else if(nums[l]+nums[r]<remT){
                        l++;
                    }else
                        r--;
                }
                while(nums[j]==nums[j+1] and j<n-2)j++;
            }
            while(nums[i]==nums[i+1] and i<n-3)i++;
        }
        return ans;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int target=0;
vector<int> n={1,0,-1,0,-2,2};
vector<vector<int>>ans=fourSum(n,target);

}