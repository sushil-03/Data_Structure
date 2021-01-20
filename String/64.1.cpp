//Longest Common Subsequence using DP
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int dp[str1.length()+1][str2.length()+1];
    int n =sizeof(dp)/sizeof(dp[0]);//rows
    int m =sizeof(dp[0])/sizeof(dp[0][0]);//column
    for(int i =n-2;i>=0;i--){
        for(int j =m-2;j>=0;j--){
            char c1=str1[i];
            char c2 =str2[j];
            if(c1==c2){
                dp[i][j]=1+dp[i+1][j+1];
            }
            else
                dp[i][j]= max(dp[i+1][j],dp[i][j+1]);
        }
    }
    cout<<dp[0][0]<<endl;
    return 0;
}