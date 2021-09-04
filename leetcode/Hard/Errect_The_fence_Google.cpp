/*
                          CONVEX HULL ALGORITHM(JARWIS ALGO or Wrapping)
        Smallest Convex Shape which cover all of the shapes given in the input 

IDEA  : We start from the leftmost point (or point with minimum x coordinate value) and we keep wrapping points in counterclockwise direction. 

=>We start from the leftmost point if there are multiple leftmost point start from the bottommost point
=>Then for the next point we search the point which is furthest to the left
=>then from this point search the point which is largest clockwise and add this to answer

=>And when the point come to the leftMost point again it is completed


Question : You are given an array trees where trees[i] = [xi, yi] represents the location of a tree in the garden.

You are asked to fence the entire garden using the minimum length of rope as it is expensive. The garden is well fenced only if all the trees are enclosed.

Return the coordinates of trees that are exactly located on the fence perimeter.


Input: points = [[1,1],[2,2],[2,0],[2,4],[3,3],[4,2]]
Output: [[1,1],[2,0],[3,3],[2,4],[4,2]]

link     https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3962/
*/



#include <bits/stdc++.h>
using namespace std;

int clockwise(vector<int>a,vector<int>b,vector<int>c){
  return ((c[0]-a[0])*(b[1]-a[1]))-((c[1]-a[1])*(b[0]-a[0]));
}


bool isbetween(vector<int>a,vector<int>i,vector<int>b){
  bool m = ((a[0]<=i[0] and b[0]>=i[0])|| b[0]<=i[0] and a[0]>=i[0]);
  bool n = ((a[1]<=i[1] and b[1]>=i[1])|| b[1]<=i[1] and a[1]>=i[1]);
  return m&n;
}
vector<vector<int>>outerTrees(vector<vector<int>>trees){
  int n=trees.size();
  if(n<=3)return trees;
  vector<vector<int>>ans;
  int leftIndex=0;
  for(int i=1;i<n;i++){
    if(trees[i][0]<trees[leftIndex][0]){
      leftIndex =i;
    }
  }
  int a= leftIndex;
  while(true){
    int b=(a+1)%n;

    for(int i=0;i<n;i++){
      if(clockwise(trees[a],trees[b],trees[i])>0)b=i;
    }
    for(int i=2;i<n;i++){
      if(clockwise(trees[a],trees[b],trees[i])==0 and isbetween(trees[a],trees[i],trees[b])){
        ans.push_back(trees[i]);
      }
    }
    ans.push_back(trees[b]);
    a=b;
    if(a==leftIndex)break;
  }

  sort(ans.begin(),ans.end());
  ans.erase(unique(ans.begin(),ans.end()),ans.end());
  return ans;

}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<vector<int>> trees={{1,1},{2,2},{2,0},{2,4},{3,3},{4,2}};


vector<vector<int>>outer = outerTrees(trees);
for(int i=0;i<outer.size();i++){
  for(int j=0;j<2;j++){
    cout<<outer[i][j]<<" ";
  }
  cout<<endl;
}
}