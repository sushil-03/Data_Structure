// Searching in an array where adjacent differ by at most k
#include<bits/stdc++.h>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int gap;cin>>gap;
    int x ;cin>>x;//target
    while(i<n){
        if(arr[i]==x) {
            cout<<i<<endl;
            return 0;
        }

    i=i+max(1,abs(arr[i]-x)/gap);
    }
    return 0;
}