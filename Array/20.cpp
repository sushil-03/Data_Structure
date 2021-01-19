#include<bits/stdc++.h>

using  namespace std;
void nextPer(vector<int>& arr){
       
    int idx =-1;
    int n = arr.size();
    for (int i = n-1; i >0; i--){
        if(arr[i]>arr[i-1]){
            idx=i;
            break;
        }
    }
    if(idx == -1){
        reverse(arr.begin(),arr.end());
    }
    else{
        int prev =idx;
        for (int i = idx+1; i < n; i++){
            if(arr[i]>arr[idx-1] && arr[i]<=arr[prev])
            prev = i;
        }
    swap(arr[idx-1],arr[prev]);
    reverse(arr.begin()+idx,arr.end());
    }
    
}
int main(){
    vector<int> arr;
    for(int i =0;i<3;i++){
        int n;cin>>n;
        arr.push_back(n);
    }
    nextPer(arr);
     for(int i =0;i<3;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}