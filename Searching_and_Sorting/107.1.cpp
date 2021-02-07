#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2]={0};
    int a,b;
    for(int i=0;i<2;i++)cin>>arr[i];
    int *freq =new int(2);
    for(int i=0;i<2;i++){
        freq[arr[i]-1]++;
    }
    for(int i=0;i<2;i++){
        if(freq[i]>1)
        a=i=1;
        if(freq[i]==0)
        b=i+1;
    }
    cout<<a<<" "<<b;
    return 0;
}