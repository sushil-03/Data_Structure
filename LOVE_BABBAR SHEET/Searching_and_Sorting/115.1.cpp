// Largest Subarray  with  zero sum
#include<bits/stdc++.h>
using namespace std;
int Solve(int arr[],int n){
    int mxlength=0;
    int sum=0;
    unordered_map<int,int> map;
   for(int i=0;i<n;i++){
       sum +=arr[i];

       if(arr[i]==0 && mxlength==0){
           mxlength=1;
       }
       if(sum==0)
       mxlength =i+1;

    if(map.find(sum)!=map.end())//find
    mxlength= max(mxlength,i-map[sum]);

    else
    map[sum]=i;
   }
return mxlength;

}

int main(){
    int  n=12;
    // cin>>n;
    int arr[]={2,8,-3,-5,2,-4,6,1,2,1,-3,4};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout<<Solve(arr,n);
    return 0;
}