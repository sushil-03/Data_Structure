/*
Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

Input: nums = [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
*/

#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>&nums){
 unordered_map<int,int>mp;
        int n=nums.size();
        for(int i =0;i<n;i++){
            nums[i]=nums[i]==0?-1:1;
        }
        //Maximum  subarray of sum =0 
        int pre=0;
        int ans=0;
        for(int i=0;i<n;i++){
            pre+=nums[i];
            
            if(pre==0)
                ans=max(ans,i+1);
            
            if(mp.find(pre)!=mp.end()){
                ans=max(ans,i-mp[pre]);
            }else{
                mp.insert({pre,i});
            }
        }
        return ans;

}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int >n={0,1,1,0,0,0};

  cout<<findMaxLength(n);

}