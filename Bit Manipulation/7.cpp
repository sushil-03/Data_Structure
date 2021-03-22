// Find Duplicate and Missing Number 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,6,2,5,1,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int xxor=0;
    for(int val:arr){
        xxor=xxor^val;
    }
    for(int i=1;i<=n;i++){
        xxor=xxor^i;
    }
    int rmsb=xxor & -xxor;
    int x=0,y=0;
    for(int val:arr){
        if((val&rmsb)==0){
            x=x^val;
        }else{
            y=y^val;
        }
    }
    for(int i=1;i<=n;i++){
        if((i&rmsb)==0){
            x=x^i;
        }else{
            y=y^i;
        }
    }
    for(int val:arr){
        if(val==x){
            cout<<"Missing Number is "<<y<<endl;
            cout<<"Repeating Number is "<<x;
            break;
        }else{
            cout<<"Missing Number is "<<x<<endl;
            cout<<"Repeating Number is "<<y;
            break;
        }
    }
}