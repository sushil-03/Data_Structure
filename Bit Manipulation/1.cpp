// Turn off bit and turn on
#include<bits/stdc++.h>
using namespace std;
void turn_off(int n,int k){
 int offmask= ~(1 << k);
    cout<<(n & offmask);
}
void turn_onn(int n,int k){
    int on_mask= (1<<k);
    cout<<(n | on_mask);
}
void toggle(int n,int k){
    int togg=(1<<k);
    cout<<(togg^n);
}
bool set_bit(int n,int k){
    int ch=(1<<k);
    if((ch & n)==0){
        return false;
    }else{
        return true;
    }
}
int main(){
    int n=4;
    int k=2;
    turn_off(n,k-1);
    cout<<"\n";
    turn_onn(n,k-1);
    cout<<"\n";
    toggle(n,k-1);
    cout<<"\n";
    if(set_bit(n,k)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}