//Triplet sum lesser than given value
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=0;
    int sum;
    cin>>sum;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]>=sum)
            r--;
            else{
                ans +=r-l;
                l++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}