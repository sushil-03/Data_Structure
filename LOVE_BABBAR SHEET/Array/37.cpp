#include<iostream>
using  namespace std;
int main()
{
    // 87 78 16 94
// 36 72
    int arr[]={1, 2, 3,0, 3, 4};
    int a=1,b=3;
    int n= sizeof(arr)/sizeof(arr[0]);
    int left =0;
    int right = n-1;
    for(int i=0;i<=right;i++)
    {
        if(arr[i]<a){
            swap(arr[i],arr[left]);
            left++;
        }
         else if(arr[i]>b){
            swap(arr[i],arr[right]);
            right--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}