#include<iostream>
using namespace std;
int fact(int n){
    int res[10000]={0};
    int size =1;
    res[0] =1;
    int q=2;
    int carry =0;
    int x=0;
    while(q<=n){
        x=0;
        carry=0;
        while(x<size){
            res[x] = (res[x] * q)+carry;
            carry  = res[x]/10;
            res[x] =  res[x]% 10;
            x++;
        }
        while(carry){
            res[size] = carry % 10;
            carry =carry/10;
            size++;
        }
        q++;
    }
    size--;
    while (size>=0){
        cout<<res[size];
        size--;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
  fact(n);
    return 0;
}