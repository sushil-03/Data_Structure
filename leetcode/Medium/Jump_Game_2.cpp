#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given an array of non-negative integers nums, you are initially positioned at the first index of the array.

Your goal is to reach the last index in the minimum number of jumps.

You can assume that you can always reach the last index.


Example 1:

Input: nums = [2,3,1,1,4]
Output: 2

*/
int jump(vector<int>& nums) {
        int jump=1;
        int step=nums[0];
        int maxIndx =nums[0];
        if(nums.size()==1)return 0;
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1){
                return jump;
            }
            if(nums[i]+i >maxIndx){
                maxIndx = nums[i]+i;
            }
            step--;
            if(step==0){
                jump++;
                step= maxIndx - i;
            }
        }
        return jump;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int>nums={2,3,1,1,4};
cout<<jump(nums);


}