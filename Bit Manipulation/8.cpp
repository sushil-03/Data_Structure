// Find element that appear once while all other elements appear twice
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,7,8,3,8,3,2};
    int xxor=0;
    for(int val:arr){
        xxor ^=val;
    }
    cout<<xxor;
}