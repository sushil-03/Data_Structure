#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/
vector<int> EfficientOne(vector<int>& nums, int target) {
     vector<int>v;
        int x, y;
        int l = -1, r = nums.size(), mid;
        while(l+1<r){
            mid = l+(r-l)/2;
            if(nums[mid]<target) l = mid;
            else r = mid;
        }
        x = l+1;
        l = -1, r = nums.size(), mid;
        while(l+1<r){
            mid = l+(r-l)/2;
            if(nums[mid]>target) r = mid;
            else l = mid;
        }
        y = r;
        if(x==y) {
            v={-1,-1};
        }
        else{
            v={x,y-1};
        }
        return v;
}

vector<int> MyAPPROACHsearchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        if(nums.size()==0)return {-1,-1};
        if(nums.size()==1){
            if(target==nums[0]){
                return {0,0};
            }else{
                return {-1,-1};
            }
        }
        int n=nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
                int point =mid;
                while(point-1>=l and nums[point-1]==target ){
                    point--;
                }
                while(mid+1<=r and nums[mid+1]==target){
                    mid++;
                }
                return {point,mid};
                
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
            
        }
        return {-1,-1};
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int>nums = {5,7,7,8,8,10};
int target =8;
vector<int>ans= MyAPPROACHsearchRange(nums,target);
cout<<ans[0]<<" "<<ans[1]<<endl;
}