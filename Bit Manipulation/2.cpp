// Right Most Set Bit(RSB) mask
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=74;
    // x & x''
    // change rightmost bit 
    cout<< bitset<8>(n)<<endl;
    cout<< bitset<8>(n& ~n+1);

    cout<<endl;
    // index from the right

    int count=1;
    int m=1;
    while(!(m&n)){
        m=m<<1;
        count++;
    }
    cout<<count;
    return 0;
}