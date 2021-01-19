// Merge 2 sorted arrays without using Extra space.

#include<bits/stdc++.h>
using namespace std;
void isort(int arr[],int n){
    // cout<<arr;
    int current  =1;
    while (current<n){
        for (int i = 0; i < n-current; i++){
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
        current++;
        
    }
    
}
int main(){
    int arr1[]={3,5,7};
    int arr2[]={4,6,9};
    int n=3,m=3;
    int i=3-1;
    int j=0;
    while(i>=0&&j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;j++;
        }
        else break;
    }
    isort(arr1,n);
    isort(arr2,m);
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    for(int i=0;i<m;i++) cout<<arr2[i]<<" ";
    return 0;
}