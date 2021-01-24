#include<bits/stdc++.h>
using namespace std;
int main(){
     string str;
     cin>>str;
     int n =str.length();
     int dp[n][n];
     int count =0;

     for(int g=0;g<n;g++){
         for(int i=0,j=g;i<n;i++,j++){
             if(g==0)
             dp[i][j]=true;
             else if(g==1){
                 if(str[i]==str[j])
                 dp[i][j] =true;
                 else
                 dp[i][j] =false;
             }
             else{
                 if(str[i]==str[j]  && dp[i-1][j]== true)
                 dp[i][j] =true;
                 else
                 dp[i][j]=false;
             }
             
             if(dp[i][j])
             count++;
         }
     }
cout<<count<<endl;
return 0;
}