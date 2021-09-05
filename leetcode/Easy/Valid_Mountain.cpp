#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]



*/

bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return false;
        bool f1=false,f2=false;
        int i;
        for(i=1;i<n;i++){
            if(arr[i-1]<arr[i]){
                f1=true;
                continue;
            }else 
                break;
        }
        if(i==0)return false;
        for(;i<n;i++){
            if(arr[i-1]>arr[i]){
                f2=true;
                continue;
            }
            else
                break;
        }
        
        if(f1==false || f2==false)return false;
        if(i==n)return true;
        return false;
        
    }

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>v={0,3,2,1};
  cout<<validMountainArray(v);
}