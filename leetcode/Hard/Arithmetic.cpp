#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                               Arithmetic Slices II - Subsequence
Given an integer array nums, return the number of all the arithmetic subsequences of nums.

A sequence of numbers is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

For example, [1, 3, 5, 7, 9], [7, 7, 7, 7], and [3, -1, -5, -9] are arithmetic sequences.
A subsequence of an array is a sequence that can be formed by removing some elements (possibly none) of the array.
 

Example 1:
Input: nums = [2,4,6,8,10]
Output: 7
Explanation: All arithmetic subsequence slices are:
[2,4,6]
[4,6,8]
[6,8,10]
[2,4,6,8]
[4,6,8,10]
[2,4,6,8,10]
[2,6,10]

Idea: we use map to store the index and diff of the number we than increment if the difference is found previously.
*/
  int numberOfArithmeticSlices(vector<int>& nums) {
        vector<unordered_map<long ,long>>dp(nums.size());
        int ans=0;
            
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                long diff = (long)nums[i] - (long)nums[j];
                dp[i][diff]++;
                
                if(dp[j].find(diff)!=dp[j].end()){
                    dp[i][diff]+=dp[j][diff];
                    ans+=dp[j][diff];
                }
            }
        }
        return ans;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>v={2,4,6,8,10};

cout<<numberOfArithmeticSlices(v);

}