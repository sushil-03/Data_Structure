//Kernighan's Algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=7;
    int count =0;
    while(x!=0){
        int rmsb=x & -x;//-x is same as ~x+1
        x-=rmsb;
        count++;
    }
    cout<<count;
}