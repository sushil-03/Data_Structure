#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*

                          Insert Interval
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.


Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
*/
 vector<vector<int>> insert(vector<vector<int>>& ind, vector<int>& newI) {
        if(ind.empty()){
            ind.push_back(newI);
            return ind;
        }
        int i=0;
        while(i<ind.size() and ind[i][0]<=newI[0])i++;
        ind.insert(ind.begin()+i,newI);
        
        vector<vector<int>>ans;
        ans.push_back(ind[0]);
        for(int i=1;i<ind.size();i++){
            if(ind[i][0]<=ans.back()[1]){
                ans.back()[1] =max(ans.back()[1],ind[i][1]);
            }else{
                ans.push_back(ind[i]);
            }
        }
        return ans;
        
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif



}