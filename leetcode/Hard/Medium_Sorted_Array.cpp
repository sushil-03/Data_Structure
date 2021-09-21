#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                        Medium of Two Sorted Array

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

*/
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if(nums1.size()>nums2.size()){
        nums1.swap(nums2);
    }
    int n=nums1.size();
    int m=nums2.size();
    
    int l=0,h=n;
    while(l<=h){
        int i1= (l+h)/2;
        int i2 =(n+m+1)/2 -i1;
        
        int min1 = (i1==n)?INT_MAX:nums1[i1];
        int min2 = (i2==m)?INT_MAX:nums2[i2];
        int max1 = (i1==0)?INT_MIN:nums1[i1-1];
        int max2 = (i2==0)?INT_MIN:nums2[i2-1];
        
        
        int maxl=max(max1,max2);
        int minl=min(min1,min2);
        if(maxl<=minl){
                if((m+n)%2==0){
                return (double)(maxl+minl)/2;
            }
            else
                return maxl;
        }
      else if(min1<max2)
            l =i1+1;
        else
            h=i1-1;
    }
    return 0;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int>nums1 ={1,3}, nums2 = {2};
cout<<findMedianSortedArrays(nums1,nums2);


}