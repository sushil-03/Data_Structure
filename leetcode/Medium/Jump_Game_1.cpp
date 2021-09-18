#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.


*/
 bool canJump(vector<int>& nums) {
        int minIn=nums[0];
        int jump=1;
        int step=nums[0];
        int n=nums.size();
        if(n==1)return true;
        for(int i=1;i<n;i++){
           
            if(i>minIn)return false;
            if(nums[i]+i>minIn){
                minIn=nums[i]+i;
            }
            step--;
            if(step==0){
                jump++;
                step=minIn-i;
                
            }
        }
        return true;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums={2,3,1,1,4};
cout<<canJump(nums);

}