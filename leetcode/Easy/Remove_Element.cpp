#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                              REMOVE ELEMENT


*/

int removeElement(vector<int>& nums, int val) {
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            if(nums[l]==val){
               swap(nums[l],nums[r]);
                   r--;
            }else{
                l++;
            }
        }
        int count=0;
        for(int i=r;i>=0;i--){
            if(nums[i]==val)
                count++;
            else break;
        }
        return r-count+1;
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums= {3,2,2,3};
int val = 3;
cout<<removeElement(nums,val);

}