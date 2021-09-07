#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                      Trapping Rain Water
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.


*/
 int trap_method_2(vector<int>& height) {
        int n=height.size();
        
        int left[n],right[n];
        
        left[0]=height[0];
        right[n-1]=height[n-1];
        
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }    
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }    
        int ans=0;
        for(int i=1;i<n-1;i++){
            ans+=min(left[i],right[i])-height[i];
        }
        return ans;
    }


int trap_method_1(vector<int>& height) {
        int n=height.size();
        
        int l=0,r=n-1,level=0;
        int ans=0;
        while(l<r){
            int lower = height[height[l]<height[r] ? l++ :r-- ];
            int level =max(lower,level);
            ans+=level-lower;
        }
        return ans;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
vector<int>h={0,1,0,2,1,0,1,3,2,1,2,1};
  cout<<trap_method_1(h);
  cout<< trap_method_2(h);


}