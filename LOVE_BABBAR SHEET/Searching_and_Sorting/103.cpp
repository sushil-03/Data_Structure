#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>&nums,int target){
    int i=0;
    for( i=0;i<nums.size();i++){
        if(nums[i]==taget){
            return i;
        }
    }
    if(i==nums.size())
    return -1;
}
int main(){
    vector<int>nums;
    for(int i=0;i<5;i++)
    cin>>nums[i];
    int target;
    cin>>target;
    cout<<Solve(nums,taget);
    return 0;
}