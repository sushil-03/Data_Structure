#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,3,1,4,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}