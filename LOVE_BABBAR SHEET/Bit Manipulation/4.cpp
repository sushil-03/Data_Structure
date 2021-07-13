// Josephus Problem (killing alternatively)
// 2ki power x+l=n;r-0
#include<bits/stdc++.h>
using namespace std;
int power2(int n){
    int i=1;
    while(i*2<=n){
        i *=2;
    }
    return i;
}
int main(){
    int n=12;//9
    int hp2=power2(n);
    int l=n-hp2;
    cout<< 2*l+1;
}