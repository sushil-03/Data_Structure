#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="ababbbabbababa";
    bool dp[str.length()][str.length()];
    for(int g=0;g<str.length();g++){
        for(int i=0,j=g;j<str.length();i++,j++){
            if(g==0){
                dp[i][j]=true;
            }else if(g==1){
                dp[i][j]=str[i]==str[j]?true:false;
            }else{
                if(str[i]==str[j] && dp[i+1][j-1]==true)
                dp[i][j]=true;
                else
                dp[i][j]=false;
            }
        }
    }

    int strg[str.length()];
    strg[0]=0;
    for(int i=1;i<str.length();i++){
        if(dp[0][i])
        strg[i]=0;
        else{
            int mi=INT32_MAX;
            for(int j=i;j>=1;j--){
                if(dp[j][i]){
                    mi=min(strg[j-1],mi);
                }
            }
            strg[i]=mi+1;
        }
    }
    cout<<strg[str.length()-1];

}