#include<iostream>
using namespace std;
int main(){
    int arr[]={};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans =0;
    for(int i=0;i<n;i++){
        int temp = arr[i];
        while(temp>0){
            int mod= temp %10;
            temp = temp /10;
            ans = (ans *10) +mod;
        }
        if(ans!=arr[i]) return 0;
    }
    return 1;
}