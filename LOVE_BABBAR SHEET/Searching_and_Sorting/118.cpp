//Minimum number of swaps 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    vector< pair<int,int> >v(n);
    int c=0;
    for(int i=0;i<n;i++)
    v[i]={arr[i],i};

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i].second==i)
        continue;
        else{
            c++;
            swap(v[i],v[v[i].second]);
            i--;//for checking again
        }
    }
    cout<<"Minimum number of swaps "<<c<<endl;
    return 0;
}