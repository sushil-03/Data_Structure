// Copy Set Bit in A range
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10,y=13,l=2,r=3;
    int mask=(1<<(r-l+1));
    mask--;
    mask=(mask<<(l-1));
    mask=(mask & x);
    y=mask| y;
    cout<<y;
}