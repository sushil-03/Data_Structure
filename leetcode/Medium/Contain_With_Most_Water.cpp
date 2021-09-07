#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                         Container With Most Water
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container.

Example 1:Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

https://leetcode.com/problems/container-with-most-water/

*/
//This is the type of tapping rain water
int maxArea(vector<int>& height) {
        int ans=0;
        int l=0;
        int r=height.size()-1;
      //  we take every small element and check the length of rectangle of this size; 
        while(l<r){
            int length = r-l; 
            int lower =height[height[l]<height[r] ? l++:r--];
            ans =max(ans,lower*length);
        }
        return ans;
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int>h={1,8,6,2,5,4,8,3,7};
  cout<<maxArea(h);

}