#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1 ,3, 5, 8, 9, 2 ,6, 7, 6 ,8 ,9 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxReach,step,jump=1;
    maxReach=step=arr[0];
    if(arr[0]==0)return -1;
    for(int i=1;i<n;i++){
        if(i==n-1){
            cout<< jump;
            return 0;
        }
        maxReach=max(maxReach,arr[i]+i);
        step--;
        if(step==0){
            jump++;
            if(i>=maxReach)return -1;
            step=maxReach-i;
        }
    }
    cout<<jump;
}