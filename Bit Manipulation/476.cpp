// Power of 2 
#include<bits/stdc++.h>
using namespace std;

bool Solve(int  n){
    if(n==0)
    return false;

    int ans= (n & (n-1)); 
    if(ans==0)return true;
    else
    return false;
}
int main(){
    int n=98;
    if(Solve(n)){
        cout<<"True";
    }else{
        cout<<"False";
    }
return 0;
}
