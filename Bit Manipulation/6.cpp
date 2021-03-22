// All repeating except two(Two unique rest repeated)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={36,50,24,56,36,24,42,50};//56 42
    int n=sizeof(arr)/sizeof(arr[0]);
    int xxor=0;//XOR of all number
    for(int val:arr){
        xxor=xxor ^ val; 
    }
    int rmsb= xxor & -xxor;//~x+1 Double complement 
    int x=0,y=0;
    for(int val:arr){
        if((val&rmsb)==0){//off
        x =x^val;
        }else{
            y=y^val;
        }
    }
    cout<<x<<" "<<y;

}
