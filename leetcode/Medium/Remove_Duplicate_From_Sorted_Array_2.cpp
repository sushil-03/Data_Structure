#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]


*/

   int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int n =nums.size();
        int count=1,j=1;
        for(int i=1;i<n;i++){
            
            if(nums[i]==nums[i-1] and count<2){
                nums[j++]=nums[i];
                count++;
            }else if(nums[i]!=nums[i-1]){
                nums[j++]=nums[i];
                count=1;
               
            }
        }
        return j;
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums= {1,1,1,2,2,3};
cout<<removeDuplicates(nums);

}