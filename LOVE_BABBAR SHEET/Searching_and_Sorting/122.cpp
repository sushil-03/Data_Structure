// Find rotated pivot element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={20,10,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    while(lo<hi){
        int mid =(lo+hi)/2;
        if(arr[mid]<arr[hi])
        hi =mid; 
        else
        lo +=mid+1;
    }
    cout<<arr[hi];
}