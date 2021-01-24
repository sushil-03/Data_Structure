//Palindrome Count [  SUB SEQUENCE]
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;

   int n=str.size();
   int dp[n+1][n+1];

   for(int g=0;g<str.length();g++){
       for(int i=0,j=g;i<str.length();i++,j++){
           if(g==0){
               dp[i][j]=1;
           }
           else if(g==1){
              dp[i][j]=str[i]==str[j]?3:2; 
           }
           else
           {
               if(str[i]==str[j])
               dp[i][j]= dp[i][j-1]+dp[i+1][j]+1;
               else{
                   dp[i][j]=dp[i][j-1]+dp[i+1][j] -dp[i+1][j-1];
               }
           }
           
       }
   }
   cout<<dp[0][n-1]<<endl; 
}