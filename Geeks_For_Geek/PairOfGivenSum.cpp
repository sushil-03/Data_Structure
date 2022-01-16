//Given a sorted and rotated array, find if there is a pair with a given sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int target;cin>>target;
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        arr[i]=temp;
    }
    //Find we find the largest element in the vector and smallest element
    int  i;
    int count=0;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])break;
    }
    int l=i;
    int r=(i+1)%n;
    while(l!=r){
        if(arr[l]+arr[r]==target){
            count++;
            if(r==(l-1+n)%n){
                break;
            }
            r=(r+1)%n;
            l=(l-1+n)%n;
        }     
        else if(arr[l]+arr[r]<target){
            r=(r+1)%n;
        }else{
            l=(l-1+n)%n;
        } 
    }
               cout<<count<<endl;
    return 0;
}
