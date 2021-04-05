// Repeating two number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={36,50,24,56,36,24,42,50};
    int xxor=0;
    for(int val:arr){
        xxor^=val;
    }
    int x=0,y=0;
    int rmsb= xxor & -xxor;
    for(int val:arr){
        if((rmsb & val)==0 ){
            x^=val;
        }else{
            y^=val;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}