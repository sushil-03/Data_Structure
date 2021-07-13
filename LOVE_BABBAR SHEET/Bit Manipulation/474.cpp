// Bit Conversion
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10,b=20;
    int c=0;
    while(a>0|| b>0){
        int a_bit=a&1;
        int b_bit=b&1;
        if(a_bit!=b_bit) c++;
        a>>=1;
        b>>=1;
    }
    cout<<c;
}