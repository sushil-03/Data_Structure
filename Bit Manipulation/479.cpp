#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10,b=3;
    int sign=((a<0) ^ (b<0))?-1 : 1;
    a=abs(a);
    b=abs(b);
    int res=0;
    while(a>=b){
        a-=b;
        res++;
    }
    int ans=res*sign;
    cout<<ans;
}