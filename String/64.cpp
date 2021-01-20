//Recurring subsequence
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1;cin>>str1;
    int dp[str1.length()+1][str1.length()+1]={0};
    int n =sizeof(dp)/sizeof(dp[0]);
    int m =sizeof(dp[0])/sizeof(dp[0][0]);
    for(int  i=n-1;i>=0;i--){
        for(int  j=m-1;j>=0;j--){
            if(i==n-1 || j==m-1) dp[i][j]=0;
           
            else if(str1[i]==str1[j]  && i!=j)
                dp[i][j] = 1 + dp[i+1][j+1];
            
            else
                dp[i][j] =max(dp[i+1][j],dp[i][j+1]);
            
        }
    }
    printf("%d",dp[0][0]);
}
