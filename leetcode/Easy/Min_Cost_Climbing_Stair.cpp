#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.
Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: Cheapest is: start on cost[1], pay that cost, and go to the top.


*/
 int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        
        vector<int>opt(n+1,0);
        opt[0]=cost[0];
        opt[1]=cost[1];
        for(int i=2;i<n;i++){
            opt[i]=cost[i]+min(opt[i-1],opt[i-2]);
        }
        return min(opt[n-1],opt[n-2]);
        
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>cost = {1,100,1,1,1,100,1,1,100,1};

cout<<minCostClimbingStairs(cost);
}