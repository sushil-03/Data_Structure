#include<bits/stdc++.h>
#define n 10
#define m 3
using namespace std;
int DIRECTION[4][4]={{1,0},{-1,0},{0,1},{0,-1}};

int longestPath(int matrix[n][m],int i,int j,int cache[n][m]){
    if(cache[i][j]>0)
    return cache[i][j];

    int mx=0;
    for(int dir[4]: DIRECTION){
        int x= dir[0]+i;
        int y=dir[1]+j;
        if(x>-1 && y>-1 && x<n && y<m && matrix[x][y]>matrix[i][j]){
            int longest=longestPath(matrix,x,y,cache);
            mx=max(longest,mx);
        }
    }
    cache[i][j]=mx+1;
    return cache[i][j];
}
int longestIncreasingPath(int matrix[n][m]){
    // int n=sizeof(matrix)/sizeof(matrix[0]);
    // int m=sizeof(matrix[0])/sizeof(matrix[0][0]);
    int longestPath=0;
    if(n==0 ||m==0) return 0;

    int cache[n][m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int longest = longestPath(matrix,i,j,cache);
            longestPath=max(longestPath,longest);
        }
    }
    return longestPath;
}

int main(){
    int matrix[n][m]= 
    { 
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 
        { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 }, 
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } 
    }; 
    cout<<"Answer is "<<longestIncreasingPath(matrix);
    return 0;
}