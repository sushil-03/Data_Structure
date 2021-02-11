// Using divison 
#include<bits/stdc++.h>
using namespace std;
int Solve(int arr[],int n){
    int zeros=0;    
    int prod=1;
    for(int i=0;i<n;i++)
    if(arr[i]!=0)
    prod *= arr[i];
    else
    zeros++;
    if(zeros>1){
        for(int i=0;i<n;i++)
        arr[i]=0;
        return arr;
    }
    if(zeros==1){
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[i]=0;
            }
            else
            arr[i]=prod;
        }
    }
    for(int i=0;i<n;i++){
        arr[i] = prod/arr[i];
    }
    return arr[i];
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    Solve(arr,n);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}