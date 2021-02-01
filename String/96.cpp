//Number of operation required to make one string to another
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1="EACBD";
    string str2="EABCD";
    int n=str1.length();
    int m= str2.length();
    if(n!=m)
    return -1;
    int check[256]={0};
    for(int i=0;i<n;i++){
        check[str1[i]]++;
    }
    for(int i=0;i<m;i++){
        check[str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(check[i]!=0)
        return -1;
    }
    int res=0;
    for(int i=n-1,j=n-1;i>=0; ){
        while(i>=0 && str1[i]!=str2[j]){
            i--;
            res++;
        }
        if(i>=0){
            i--;
            j--;
        }
   }
   cout<<res<<endl;
   return 0;
}