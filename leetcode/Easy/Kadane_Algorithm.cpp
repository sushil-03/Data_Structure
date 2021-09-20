#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                    MAXIMUM SUM SUBARRAY
                


*/

int maxSubArray(vector<int>& nums) {
    int sum=nums[0],ovsum=nums[0];
    for(int i=1;i<nums.size();i++){
        if(sum>0){
            sum+=nums[i];
        }else{
            sum=nums[i];
        }
        ovsum=max(sum,ovsum);
    }
    return ovsum;
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
cout<<maxSubArray(nums);

}