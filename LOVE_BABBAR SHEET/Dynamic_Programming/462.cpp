// Numeric Keypad
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[n+1][10];
    memset(dp,0,sizeof(dp));
    vector<vector<int>>v(10);
    v[0]={0,8};
    v[1]={1,3,4};
    v[2]={1,2,3,5};
    v[3]={2,3,6};
    v[4]={1,4,5,7};
    v[5]={2,4,5,6,8};
    v[6]={5,3,6,9};
    v[7]={6,7,8};
    v[8]={7,8,9,0,5};
    v[9]={8,6};
    for(int i=1;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(i==1){
                dp[i][j]=1;
            }else{
                for(int prev:v[j]){
                    dp[i][j]+=dp[i-1][prev];
                }   
            }
        }
        int sum=0;
        for(int i=0;i<=9;i++){
            sum+=dp[n][i];
        }
        cout<<sum<<endl;
    }

}