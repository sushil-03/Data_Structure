//Longest Palindrome in a string number 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    bool dp[str.length()][str.length()];
    int size =0;
    for(int g=0;g<str.length();g++){
        for(int i=0,j=g;j<str.length();i++,j++){
            if(g==0){
             dp[i][j]=true;   
            }
            else if(g==1){
                if(str[i]==str[j])
                dp[i][j]=true;
                else
                dp[i][j]=false;
            }
            else{
                if(str[i]==str[j] && dp[i+1][j-1]==true)
                dp[i][j]=true;
                else
                dp[i][j]=false;
            }

            if(dp[i][j]){
                size =g+1;
            }
        }
    }
    cout<<endl<<size<<endl;
    return 0;
}