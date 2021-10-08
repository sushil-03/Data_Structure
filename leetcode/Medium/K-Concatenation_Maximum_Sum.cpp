#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                                  . K-Concatenation Maximum Sum
Given an integer array arr and an integer k, modify the array by repeating it k times.
For example, if arr = [1, 2] and k = 3 then the modified array will be [1, 2, 1, 2, 1, 2].

Example 1:

Input: arr = [1,2], k = 3
Output: 9
*/
long long mod=1e9+7;
  int kadane(vector<int>v){
      int n=v.size();
      long long maxSum=0,sum=0; 
      
      for(int i=0;i<n;i++){
        if(sum>=0){
          sum+=v[i] ;
        }else{
          sum=v[i];
        }
        maxSum=max(maxSum,sum);
          maxSum%= mod;
      }
      return maxSum;
      
  }
  int kConcatenationMaxSum(vector<int>& arr, int k) {
      long long s=0;
      int n=arr.size();
          for(auto x:arr){
              s+=x;
          }
      if(k==1){
          return kadane(arr)%mod;
      }else if(s<0){//answer should be in one or second copy
            vector<int>v(n*2);
          for(int i=0;i<n;i++)v[i]=arr[i];
        for(int i=0;i<n;i++)v[i+n]=arr[i];
        
        return kadane(v) % mod;
    }else{//if sum is positive the we take two copies and rest of them would be multiplied by remaining number
        long long  ans= s * (k-2);
        ans %=mod;
          vector<int>v(n*2);
        for(int i=0;i<n;i++)v[i]=arr[i];
        for(int i=0;i<n;i++)v[i+n]=arr[i];
        ans+=kadane(v);
        ans %=mod;
        return ans;
    }

    return 0;
    
}
int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>a={1,-2,1};
cout<<kConcatenationMaxSum(a,5);

}