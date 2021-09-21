#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                    MERGE INTERVAL
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
*/
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    
    int n=intervals.size();
    int idx=0;
    
    for(int i=1;i<n;i++){
        if(intervals[idx][1]>=intervals[i][0]){
            intervals[idx][1]=max(intervals[idx][1],intervals[i][1]);
        }else{
            idx++;
            intervals[idx]=intervals[i];
        }
    }
    intervals.erase(intervals.begin()+idx+1,intervals.end());
    return intervals;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
 vector<vector<int>>intervals ={{1,3},{2,6},{8,10},{15,18}};
vector<vector<int>>ans=merge(intervals);

}