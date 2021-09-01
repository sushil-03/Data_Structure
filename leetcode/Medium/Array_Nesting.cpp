/*
You are given an integer array nums of length n where nums is a permutation of the numbers in the range [0, n - 1].

You should build a set s[k] = {nums[k], nums[nums[k]], nums[nums[nums[k]]], ... } subjected to the following rule:

The first element in s[k] starts with the selection of the element nums[k] of index = k.
The next element in s[k] should be nums[nums[k]], and then nums[nums[nums[k]]], and so on.
We stop adding right before a duplicate element occurs in s[k].
Return the longest length of a set s[k].

 

Example 1:

Input: nums = [5,4,0,3,1,6,2]
Output: 4
Explanation: 
nums[0] = 5, nums[1] = 4, nums[2] = 0, nums[3] = 3, nums[4] = 1, nums[5] = 6, nums[6] = 2.
One of the longest sets s[k]:
s[0] = {nums[0], nums[5], nums[6], nums[2]} = {5, 6, 2, 0}

*/


#include <bits/stdc++.h>
using namespace std;
int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        vector<bool>check(n,false);

        for(int i=0;i<n;i++){
            int count=1;
            int prev=nums[i];
            bool oneTime =check[prev];
            
            while(1 and oneTime == false){
                if(check[prev]==true){
                    break;
                }
            check[prev]=true;
            prev=nums[prev];
            if(check[prev]==false)
            count++;
          }
            res=max(res,count);
        }
        return res;
    }
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // vector<int>nums={5,4,0,3,1,6,2};
  vector<int>nums={0,2,1};
  cout<<arrayNesting(nums);
}