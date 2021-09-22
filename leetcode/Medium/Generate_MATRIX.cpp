#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*



*/
vector<vector<int>> generateMatrix(int n) {
        int total = n*n;
        vector<vector<int>>mat(n,vector<int>(n));
        int minR=0,minC=0,maxR=n-1,maxC=n-1;
        vector<vector<int>>ans;

        int k=1;
        while(k<=total){
            for(int i=minC,j=minR;i<=maxC and k<=total;i++){
                
                mat[j][i]=k++;
            }
            minR++;
            for(int i=minR,j=maxC;i<=maxR and k<=total;i++){
                mat[i][j]=k++;
            }
            maxC--;
            for(int i=maxC,j=maxR ;i>=minC and k<=total;i--){
                mat[j][i]=k++;
            }
            maxR--;
            for(int i=maxR,j=minC;i>=minR and k<=total;i--){
                mat[i][j]=k++;
            }
            minC++;
        }
      
       for(int i=0;i<n;i++){
            ans.push_back(mat[i]);
        }
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


vector<vector<int>>ans =generateMatrix(4);
}