#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int csum=0;
    int sum=0;
    for(int i=0;i<s.length();i++){
        int x=s[i]=='1'?-1:1;
        if(sum>0){
            sum+=x;
        }else{
            sum=x;
        }
        csum=max(csum,sum);
    }
    cout<<csum<<endl;
}