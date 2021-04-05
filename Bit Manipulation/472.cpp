#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;
    int count=0;
    while(x!=0){
        int rmsb= x & -x;
        x-=rmsb;
        count++;
    }
    cout<<count;
    return 0;
}