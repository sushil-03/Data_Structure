#include<bits/stdc++.h>
using namespace std;
void mergesort(int a[],int temp[],int left,int mid,int right){
    int i=left;
    int j=mid;
    int k=left;
    while((i<=mid-1 )&& (j<=right)){
        if(a[i]<=a[j])
        temp[k++]=a[i++];
        else
        temp[k++]=a[j++];
    }
    while(i<=mid-1)
    temp[k++]=a[i++];
    while(j<=right)
    temp[k++]=a[j++];

    for(int i=left;i<=right;i++){
        a[i]=temp[i];
    }
}
void merge(int a[],int temp[],int left,int right){
    if(left>=right)
    return;
        int mid =(left+right)/2;
        merge(a,temp,left,mid);
        merge(a,temp,mid+1,right);
        mergesort(a,temp,left,mid+1,right);
    // }
}
int main(){
    int arr[]={1,5,2,1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n]={0};
    merge(arr,temp,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}