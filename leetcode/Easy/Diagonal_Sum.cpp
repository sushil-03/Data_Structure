/*



*/

#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>&mat){
  int n=mat.size();
  int i1,j1,i2,j2;
  i1=j1=i2=0;
  j2=n-1;
  int res=0;
  for(int i=0;i<n;i++){
    if(i1==i2 and j1==j2){
      res+=mat[i1][j1];
    }else{
      res+=mat[i1][j1];
      res+=mat[i2][j2];
      
    }
    i1++;
      j1++,i2++;
      j2--;
  }
  return res;
}


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

vector<vector<int>>mat={{1,2,3},
              {4,5,6},
              {7,8,9}};
      cout<<diagonalSum(mat);
}