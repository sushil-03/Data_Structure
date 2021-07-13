#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    int count =0;
    int arr[]={1,5,7,1,-1};
    int k;
    cin>>k;
    int n = sizeof(arr)/sizeof(arr[0]);
     unordered_map<int,int> m;
    for (int  i = 0; i < n; i++){

        int x = k- arr[i];
        // cout<<m[]<<" ";
        if(m[x]==0){//nhi hai maujood
        //  cout<<i<<" ";
            m[arr[i]]++;
                                // cout<<"this "<<m[3]<<m[99]<<"end" <<"    ";
        }
        else
        {
            count+=m[x];
            m[arr[i]]++;
        }
    }
        cout<<count;
        return 0;
    
}