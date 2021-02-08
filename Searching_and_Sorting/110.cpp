// find a pair with a given difference
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    int target ;
    cin>>target;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int c= -1;
    for(int i=0;i<n;i++){
        int j=0;
        while(j<n){
            if(arr[j]-arr[i]==target){
                c=1;
                break;
            }
            j++;
        }
    }
    cout<<"Required answer :"<<c<<endl;
    return 0;
}