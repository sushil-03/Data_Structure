//  Find position of set bit only has 1 one  and all zero
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=2;
    if(n==0 || (n& (n-1))!=0){
        cout<<-1;
    }else{
        cout<<log2(n)+1;
    }
    return 0;
}