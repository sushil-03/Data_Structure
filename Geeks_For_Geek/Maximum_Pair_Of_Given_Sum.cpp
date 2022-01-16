/*
    Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
    Given an array, only rotation operation is allowed on array. 
    We can rotate the array as many times as we want. 
    Return the maximum possible summation of i*arr[i].
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];

    int current=0,sum=0,finalAns=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        current =current+ (i*arr[i]);
    }
    finalAns= current;
    for(int i=1;i<n;i++){
        current = current+ sum - (n*arr[n-i] );
        finalAns =max(finalAns,current);
    }
    cout<<finalAns<<endl;
return 0;
}


