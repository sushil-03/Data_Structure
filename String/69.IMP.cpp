//Edit Distance
#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z){
    return min(min(x,y),z);
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int n =str1.length();
    int m =str2.length();
            
    int dp[n][m];

    for(int i=0;i<=n;i++){
                for(int j=0;j<=m;j++){
        if(i==0)
            dp[i][j] =j;

        else if(j==0)
            dp[i][j]=i;

        else if(str1[i-1]==str2[j-1])
            dp[i][j] = dp[i-1][j-1];

        else{                  
            dp[i][j] =  1 + min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
        }                     //insert          remove         replace

        }    
    }
    cout<<dp[n][m]<<endl;
    return 0;
}