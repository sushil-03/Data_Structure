#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={3, 5, 7, 9 ,20 ,25 ,30 ,40, 55 ,56,57 ,60 ,62};
    int arr2[]={ 1, 4, 7 ,11, 14 ,25 ,44 ,47 ,55 ,57 ,100};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    int i=0,j=0;
    int ans=0;
        int s1=0,s2=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            s1 +=arr1[i];
            i++;
        }
        else if(arr2[j]<arr1[i]){
            s2+=arr2[j];
            j++;
        }
        else{
            ans = ans+max(s1,s2)+arr1[i];
            i++;
            j++;
            s1=0;
            s2=0;
        }
    }
    while(i<n)
    s1+=arr1[i++];
    while(j<m)
    s2+=arr2[j++];
    
    ans = ans+max(s1,s2);
    cout<<ans;
    
}