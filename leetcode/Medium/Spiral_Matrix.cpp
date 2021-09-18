#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
                        SPIRAL MATRIX
Given an m x n matrix, return all elements of the matrix in spiral order.



*/
 vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        int total = n*m;
        int count=0;
        int minR=0,minC=0;
        int maxR=n-1,maxC=m-1;
            
        while(count<total){
            for(int i= minC ,j=minR;i<=maxC and count<total ;i++){
                ans.push_back(mat[j][i]);
                count++;
            }
            minR++;
            for(int i=minR,j=maxC;i<=maxR and count<total;i++){
                ans.push_back(mat[i][j]);
                count++;
            }
            maxC--;
            for(int i=maxC,j=maxR;i>=minC and count<total ;i--){
                ans.push_back(mat[j][i]);
                count++;
            }
            maxR--;
            for(int i=maxR,j=minC;i>=minR and count<total ;i--){
                ans.push_back(mat[i][j]);
                count++;
            }
            minC++;
        }
        return ans;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif



}