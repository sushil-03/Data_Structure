#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                      . Best Time to Buy and Sell Stock III
You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete at most two transactions.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:

Input: prices = [3,3,5,0,0,3,1,4]
Output: 6
Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.


*/
int maxProfit(vector<int>nums){
  int n=nums.size();
  if(n<2)return 0;

  int mini=nums[0];
  int maxi=0;
  int dp[n];
  dp[0]=0;
  for(int i=1;i<n;i++){
    int temp=nums[i]-mini;
    maxi=max(maxi,temp);
    dp[i]=maxi;
    mini=min(mini,nums[i]);
  }
  maxi=nums[n-1];
  int maximum=0;
  int add_to=0;

  for(int i=n-2;i>=0;i--){
    int temp = maxi-nums[i];
    add_to=max(add_to,temp);
    dp[i]+=add_to;
    maxi=max(maxi,nums[i]);
    maximum=max(maximum,dp[i]);
  }
  return maximum;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>nums={3,3,5,0,0,3,1,4};
cout<<maxProfit(nums);

}