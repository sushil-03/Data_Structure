#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
    int larget=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[larget]){
        larget =l;
    } 
    if(r<n && arr[r]>arr[larget]){
        larget=r;
    }
    if(larget!=i){
        swap(arr[i],arr[larget]);

// Recursively heapify all its sub-tree;
    heapify(arr,n,larget);
    }

}

void buildHeap(int arr[],int n){

    // index of last non leaf node
    int startIndx =(n/2)-1;
    for(int i=startIndx;i>=0;i--){
        heapify(arr,n,i);
    } 
}
void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

}
int main(){
    int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
    int n=sizeof(arr)/sizeof(arr[0]);

    buildHeap(arr,n);
    printHeap(arr,n);

return 0;
}