// Triplets [ 0<=i<j<=k<a.length()]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,2,5,7,2,7,5,6,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int c=0;
    for(int i=0;i<n;i++){
        int val=arr[i];
        for(int j=i+1;j<n;j++){
            val= val^ arr[j];
            if(val==0){
                c+=j-i;
            }
        }
    }
    cout<<c<<endl;
}