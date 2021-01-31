#include<bits/stdc++.h>
using namespace std;

int getMeridian(int arr[],int n){
    if(n%2==0)
    return (arr[n/2]+arr[n/2-1])/2;
    else
    return arr[n/2];
}
int Meridian(int arr1[],int arr2[],int n){
    if(n==1)
    return (arr1[0]+arr2[0])/2;
    if(n==2)
    return (max(arr1[0],arr2[0])+min(arr1[1],arr2[1]))/2;

    int m1= getMeridian(arr1,n);
    int m2 =getMeridian(arr2,n);

    if(m1==m2)return m1;
    if(m1<m2){
        if(n%2==0)
        return Meridian(arr1 + n/2-1,arr2,n-n/2+1);
        return Meridian(arr1+n/2,arr2,n-n/2);
    }
    if(m1>m2){
        if(n%2==0)
        return Meridian(arr2+n/2-1,arr1,n-n/2+1);
        return Meridian(arr2+n/2,arr1,n-n/2);
    }
    return 0;
}
int main(){
    int arr1[]={1, 2, 3, 6};
    int arr2[]={4, 6, 8, 10};
    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);    
    if(n1==n2){
        cout<<Meridian(arr1,arr2,n1);
    }
    else{
        cout<<"Invalid size"<<endl;
    }
    
    return 0;

}