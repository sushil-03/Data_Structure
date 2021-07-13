// Target Sum subset
#include<bits/stdc++.h>
using namespace std;
int main(){
    int target =10;
    int arr[]={4,2,7,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    bool dp[n+1][target+1];
    int r=sizeof(dp)/sizeof(dp[0]);
    int c=sizeof(dp[0])/sizeof(dp[0][0]);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 ||j==0)
                dp[i][j]=true;
            else if(i==0)
                dp[i][j]=false;
            else if(j==0)
                dp[i][j]= true;
            else{
                if(dp[i-1][j]==true)
                dp[i][j]=true;
                else{
                int val=arr[i-1];
                    if(val>=j){
                        if(dp[i-1][val-j]==true){
                            dp[i][j]=true;
                            }
                    }    
                }
            }
        }
    }
    if(dp[r][c]){
        cout<<"Found";
    }
    return 0;
}