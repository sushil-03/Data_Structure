#include<iostream>
using namespace std;
int maximum(int arr[],int n){
    int max =arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    return max;
}
int smallest(int arr[],int n){
    int min=arr[0];
     for(int i=1;i<n;i++){
        if(arr[i]<min){
            min =arr[i];
        }
    }
    return min;
}

int main(){
    int arr[]={5,5, 8, 6, 4, 10, 3, 8, 9 ,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int b[n]={0},k=5,l=0;
    int max,min;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            b[l++]=arr[i]+k;
        }
    }
    max =maximum(b,n);
    for (int i = 0; i < n; i++){
        if(arr[i]>k && arr[i]<max){
            b[l++] =arr[i]+k;
        }
    }
    for (int i = 0; i < n; i++){
        if(arr[i]>k && arr[i]>max){
            b[l++] =arr[i]-k;
        }
    }
    max =maximum(b,n);
    min =smallest(b,n);
    cout<<max -min;
    
    return 0;
}