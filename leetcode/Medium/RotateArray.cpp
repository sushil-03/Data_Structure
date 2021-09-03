/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]


*/


#include <bits/stdc++.h>
using namespace std;
 void reverse (vector<int>&nums,int i,int j){
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        
        int n =nums.size();
        k=k%n;
        
          reverse(nums,0,n-k-1);  
          reverse(nums,n-k,n-1);
          reverse(nums,0,n-1);
        
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int>v={1,2,3,4,5,6,7};
int k=3;
  rotate(v,k);

}