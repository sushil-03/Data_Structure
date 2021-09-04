/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

*/

#include <bits/stdc++.h>
using namespace std;

  vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int key=nums[i];
            if(mp.find(target-nums[i])==mp.end()){
                mp[key]=i;
            }else{
                return {i,mp[target-key]};
            }
        }
        return{};
    } 

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>v={2,1,8,3};
int t=9;
vector<int>ans=twoSum(v,t);
cout<<ans[0]<<"  "<<ans[1]<<endl;

}