#include<iostream>
using namespace std;
int main(){
    int arr[]={ 0,2,1,3,0,1,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left[n],right[n],sum=0;
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    for (int  i = 1 ; i < n; i++)
    {
        left[i]= max(left[i-1],arr[i]);
    }
    for (int i = n-2; i >=0; i--)
    {
        right[i] = max(right[i+1],arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=min(left[i],right[i])-arr[i];
        // cout<<right[i]<< " ";
    }
    cout<<sum<<endl;
    
    
    
}