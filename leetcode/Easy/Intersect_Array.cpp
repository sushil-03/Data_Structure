#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                            INTERSECTION OF TWO ARRAY
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

*/
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int n=nums1.size();     
        int  m =nums2.size();
        
        vector<int>ans;
        int i=n-1,j=m-1;
        while(i>=0 and j>=0){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i--,j--;
            }else if(nums1[i]<nums2[j]){
                j--;
            }else
                i--;
        }
        return ans;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>n1={1,2,2,1};
vector<int>n2={2,2};
vector<int>ans=intersect(n1,n2);

}