#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                              Longest Turbulent Subarray  
Given an integer array arr, return the length of a maximum size turbulent subarray of arr.

A subarray is turbulent if the comparison sign flips between each adjacent pair of elements in the subarray.
\Input: arr = [9,4,2,10,7,8,8,1,9]
Output: 5
Explanation: arr[1] > arr[2] < arr[3] > arr[4] < arr[5]


*/
  bool isTurbulent(vector<int>& arr,int e){
        return (arr[e]>arr[e-1] and arr[e]>arr[e+1]) ||( arr[e]<arr[e-1] and arr[e]<arr[e+1]);
    }
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        
        if(n<2)
            return n;
        int maxL =1;
        int s=0,e=0;
        while(s+1<n){
            if(arr[s]==arr[s+1]){
                s++;
                continue;
            }
            e=s+1;
            while(e+1<n and isTurbulent(arr,e)){
                e++;
            }
            maxL =max(maxL,e-s+1);
            s=e;
        }
        
        return maxL;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>arr = {9,4,2,10,7,8,8,1,9};

cout<<maxTurbulenceSize(arr);

}