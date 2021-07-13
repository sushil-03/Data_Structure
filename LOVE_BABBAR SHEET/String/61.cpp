#include<bits/stdc++.h>
using  namespace std;
int main(){
    string s1,s2,res;
    cin>>s1>>s2>>res;
    int l1= s1.size();  
    int l2= s2.size();  
    int l3= res.size();
    int i=0,j=0,k=0;  
    if((l1+l2)!=l3)cout<<"No";
    while(k<l3){
        if(i<l1 && s1[i]==res[k]) i++;
        else if(j<l2 &&s2[j]==res[k]) j++;
        else break;
        k++;
    }
    if(k<l3)cout<<"No";
    else cout<<"Yes";
    return 0;
}