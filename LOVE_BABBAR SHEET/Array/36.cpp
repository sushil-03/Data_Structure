#include<iostream>
using namespace std;
int main(){
    int arr[]   ={1, 4, 45, 6, 0, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=51;
    int i=0,j=0,sum=0;
    int mi =INT32_MAX;
  
    while(j<=i &&i<n){
       while(sum<=x && i<n){
           sum += arr[i++];
       }
       while(sum>x && j<i){
           mi = min(mi,i-j);
           sum= sum-arr[j];
           j++;
       }
    }
   cout<< mi<<endl;
    return 0;
}