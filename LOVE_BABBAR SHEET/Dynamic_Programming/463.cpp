#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1,s2;
    for(int i=0;i<s.length();i++){
        if(s[i]=='T'||s[i]=='F')
        s1.push_back(s[i]);
        else
        s2.push_back(s[i]);
    }
    int n=s1.length();
    long long int dpt[n][n];
    long long int dpf[n][n];
    memset(dpt,0,sizeof(dpt));
    memset(dpf,0,sizeof(dpf));
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                if(s1[i]=='T'){
                    dpt[i][j]=1;
                    dpf[i][j]=0;
                }else{
                    dpt[i][j]=0;
                    dpf[i][j]=1;
                }
            }else{
                    for(int k=i;k<j;k++){
                            char ch=s2[k];
                            int ltc=dpt[i][k]%1003;       
                            int rtc=dpt[k+1][j]%1003;       
                            int lfc=dpf[i][k]%1003;
                            int rfc=dpf[k+1][j]%1003;
                        if(ch=='&'){
                            dpt[i][j] += ltc*rtc;
                            dpf[i][j] += ltc*rfc+lfc*rfc+lfc*rtc; 
                        }else if(ch=='|'){
                            dpt[i][j] += ltc*rtc+ltc*rfc+lfc*rtc;
                            dpf[i][j] += lfc*rfc;

                        }else{
                           dpt[i][j] += ltc*rfc+lfc*rtc;
                           dpf[i][j] += ltc*rtc+lfc*rfc;
                        }
                    }
                }
            }
        }
        cout<<dpt[0][n-1]%1003;
    }
