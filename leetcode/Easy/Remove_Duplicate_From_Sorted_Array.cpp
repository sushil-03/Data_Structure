#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                    Remove Duplicate From Sorted Array
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
*/
 int removeDuplicates(vector<int>& nums) {
       int i=1,j=1;
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return 1;
        while(j<n){
            if(nums[j]==nums[j-1] ){
                j++;
            }else{
                nums[i]=nums[j];
               // swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return i; 
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
cout<<removeDuplicates(nums);

}