// Largest  square submatrix(1,0)
// storage
// direction
// problem
#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c){
    return(min(min(a,b),c));
}
int main(){
    int n,m;
    cin>>n>>m;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int mx=INT32_MIN;
    int dp[n][n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0)
            dp[i][j]=0;
            else if(i==0 || j==0){
                dp[i][j]=1;
            }
            else{
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1])+1;//we use minimum because the smaller value is restricting 
                // him to become a bigger square and then we have to add 1;
            }

            if(dp[i][j]>mx){
                mx=dp[i][j];
            }
        }
    }

    cout<<"Largest Square Submatrix : "<<mx<<endl;
}
// 
// 
// 5
// 6
// 0
// 1
// 0
// 1
// 0
// 1
// 1
// 0
// 1
// 0
// 1
// 0
// 0
// 1
// 1
// 1
// 1
// 0
// 0
// 0
// 1
// 1
// 1
// 0
// 1
// 1
// 1
// 1
// 1
// 1