// Sort by set bit count
#include<bits/stdc++.h>
using namespace std;
bool comp(int a ,int b){
    return  __builtin_popcount(a)> __builtin_popcount(b);
}
int main(){
    int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    stable_sort(arr,arr+n,comp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// 5, 2, 3, 9, 4, 6, 7, 15, 32
// 15 - 111
// 7  - 0111
// 5  - 0101
// 3  - 0011
// 9  - 1001
// 6  - 0110
// 2  - 0010
// 4  - 0100

// 15 7 5 3 9 6 2 4 32`