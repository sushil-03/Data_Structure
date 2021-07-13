#include<iostream>
using namespace std;
int main()
{
    int arr[]= {2,3,-4,-1,6,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for (int i = 0; i < n; i++){
        if(arr[i]>0){
            if(j!=i)
                swap(arr[i],arr[j]);
                j++;
            
        }
    }
    if(j==0||j==n){
        for (int i = 0; i < n; i++)  cout<<arr[i]<<" ";
    }
    else{
    int k=0;
    while(k<n && j<n){
        swap(arr[k],arr[j]);
        k=k+2;
        j++;
    }
        for (int i = 0; i < n; i++)  cout<<arr[i]<<"  ";

    }    
    
    // cout<<j<<endl;
    
    
    return 0;
}