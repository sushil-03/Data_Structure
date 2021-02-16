// Inversion Count
#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int temp[],int left,int mid,int right){
    int i=left;
    int j=mid;
    int k=left;
    int inv=0;
    while(i<=mid-1 && j<=right){
        if(a[i]<=a[j])
        temp[k++]=a[i++];
        else{
            temp[k++]=a[j++];
            inv +=mid-i;
        }
    }
    while(i<=mid-1)
    temp[k++]=a[i++];
    while(j<=right)
    temp[k++]=a[j++];

    for(int i=left;i<=right;i++){
        a[i]=temp[i];
    }
    return inv;
}
int MergeSort(int a[],int temp[],int left,int right){
    int inv=0;
    int mid;
    while(left<right){
        mid=(left+right)/2;
        inv +=MergeSort(a,temp,left,mid);
        inv +=MergeSort(a,temp,mid+1,right);

        inv+=merge(a,temp,left,mid+1,right);
    }
    return inv;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int temp[n];
    cout<<MergeSort(arr,temp,0,n-1);
    return 0;
}