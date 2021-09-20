#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                    ADD ONE
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]

*/

 vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]+=1;
            return digits;
        }
        vector<int>ans;
        digits[n-1]+=1;
        carry=digits[n-1]/10;
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            int sum=carry+digits[i];
            int ps=sum%10;
            carry=sum/10;
            ans.push_back(ps);
        }
        if(carry)
            ans.push_back(carry);
        
        reverse(ans.begin(),ans.end());
        return ans;
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>v={9,9,9};
vector<int>ans=plusOne(v);
for(auto x:ans){
  cout<<x<<" ";
}

}