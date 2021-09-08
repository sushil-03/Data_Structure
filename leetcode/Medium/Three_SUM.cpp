#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                                      Three Sum

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
*/
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
              if(i>0 && nums[i]==nums[i-1])   continue;
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    
                    int val1=nums[l];
                    while(l<r and nums[l]==val1)
                        l++;
                    
                    int val2=nums[r];
                    while(r>l and nums[r]==val2)r--;
                    
                }else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }else
                    r--;
            }
        }
     
        return ans;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int>v={-1,0,1,2,-1,-4};
vector<vector<int>>ans=threeSum(v);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[0].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}