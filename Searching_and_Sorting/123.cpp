#include<bits/stdc++.h>
using namespace std;
int Solve(int arr1[],int arr2[],int n,int m,int z){
    int i=0,j=0,k=0;
    int temp[n+m];
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            temp[k++]=arr1[i++];
        }
        else{
            temp[k++]=arr2[j++];
        }
    }
    while(i<n){
        temp[k++]=arr1[i++];
    }
    while(j<m){
        temp[k++]=arr2[j++];
    }
    return temp[z-1];
}
int main(){
    int arr1[]={2, 3, 6, 7, 9};
    int arr2[]={1, 4, 8, 10};
    int target=5;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    cout<<Solve(arr1,arr2,n,m,target);
    return 0;

}