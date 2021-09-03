/*
 Beautiful Array

An array nums of length n is beautiful if:
nums is a permutation of the integers in the range [1, n].
For every 0 <= i < j < n, there is no index k with i < k < j where 2 * nums[k] == nums[i] + nums[j].
Given the integer n, return any beautiful array nums of length n. There will be at least one valid answer for the given n.

n=1     res=1;
n=2     res=1,2;
n=3     res= 1,3,2;
n=4     res =1,3,2,4
n=5     res=1,5,3,2,4
n=6     res= 1,5,3,2,6,4



Solution :This is solve by placing odd in one side and even in other side 
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> beautifulArray(int n) {
        vector<int>res={1};
        while(res.size()<n){
            vector<int>temp;
            for(auto &x:res){
                if(x*2 -1 <=n){
                    temp.push_back(x*2-1);
                }
            }
            for(auto &x:res){
                if(x*2<=n){
                    temp.push_back(x*2);
                }
            }
            res=temp;
        }
        return res;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<int>res=beautifulArray(5);
for(auto x:res){
  cout<<x<<" ";
}

}