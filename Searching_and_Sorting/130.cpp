// Painter Partioning Problem
#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int from,int to){
    int tot=0;
    for(int i=from;i<=to;i++)
    tot +=a[i];

    return tot;
}
int main(){
    int k=3;//Painter;
    int arr[]={10, 30, 60, 10,40};//Painting
    int n=sizeof(arr)/sizeof(arr[0]);
    int dp[k+1][n+1]={0};
    for(int i=1;i<=n;i++)
    dp[1][i]=sum(arr,0,i-1);

    for(int i=1;i<=k;i++)
    dp[i][1]=arr[0];

    for(int i=2;i<=k;i++){
        for(int j=2;j<=n;j++){
            int best=INT32_MAX;
            // Partioning
            for(int p=1;p<=j;p++)
            best =min(best,max(dp[i-1][p],sum(arr,p,j-1)));

            dp[i][j]=best;
        }
    }
    cout<<dp[k][n]<<endl;
    return 0;
}