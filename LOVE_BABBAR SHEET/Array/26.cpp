#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,2,9,1,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0||arr[i]==0||m[sum])  
        {cout<<"Yes";
        return 0;
        }else
        {
            m[sum] =1;
        }
    }
     cout<<"No";   
    return 0;
}