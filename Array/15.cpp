// Jumps to the end of the array

#include<iostream>
using namespace std;
int  solve(int arr[],int n){
    int maxReachable,jumps,stepspossible;
    maxReachable =arr[0];
    stepspossible =arr[0];
    jumps =1;

    for(int i=1;i<n;i++){
        if(i==n-1) return jumps;
        maxReachable = max(maxReachable,i+arr[i]);
        stepspossible--;
        if(stepspossible==0){
            jumps++;
            if(i>maxReachable) return -1;
            stepspossible = maxReachable-i;
         }       
    }
    return jumps;
}
int main()
{
    int arr[]={1, 4, 3 ,2 ,6 ,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<< solve(arr,n);
    return 0;
}