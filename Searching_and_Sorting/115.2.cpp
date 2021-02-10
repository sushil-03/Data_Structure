//Count of subarray with sum zero
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    unordered_map<int,int>map;
    map[0]=1;

    int res=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];

        if(map.find(sum)!=map.end()){
            res +=map[sum];
            map[sum]++;
        } else {
            map[sum]++;
        }

    }
cout<<"Result "<<res<<endl;
return 0;
}