// Find element that appears once where all other appear thrice
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={51,57,51,57,63,38,57,63,63,51};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tn=INT32_MAX,tnp1=0,tnp2=0;
    for(int i=0;i<n;i++){
        int cmtn=arr[i] & tn;
        int cmtnp1=arr[i] &tnp1;
        int cmtnp2=arr[i] & tnp2;

        tn = (~cmtn)& tn;
        tnp1=cmtn | tnp1;
        
        tnp1 =(~cmtnp1) & tnp1;
        tnp2 = cmtnp1  | tnp2;

        tnp2 = (~cmtnp2)& tnp2;
        tn= cmtnp2|tn;
    }

    cout<<tnp1<<endl;
}