// Find the intersection and union of a array
#include<iostream>
using namespace std;
void Union(int arr1[],int arr2[],int a,int b)
{
    int i=0,j=0;
    while(i<a && j<b){
        if(arr1[i]<arr2[j])
        cout <<arr1[i++]<<" ";
        else if(arr1[i]>arr2[j])
        cout<<arr2[j++]<<" ";
        else{
        cout<<arr1[i++]<<" ";
        j++;
       }
    }
    while(i<a)
    cout<<arr1[i++]<<" ";
    while(j<b)
    cout<<arr2[j++]<<" ";
    
}
void Intersection(int arr1[],int arr2[],int a,int b){
    int i=0,j=0;
    while(i<a &&j<b){
        if(arr1[i]<arr2[j])  i++;
        else if(arr1[i]>arr2[j])   j++;
        else {
        cout<<arr1[i++]<<" ";
        j++;}                
    }
}
int main()
{
    int arr1[]={1,4,6,7};
    int arr2[]={4,6,8,10};
    int m= sizeof(arr1)/sizeof(arr1[0]);
    int n= sizeof(arr2)/sizeof(arr2[0]);
    Union(arr1,arr2,m,n);
    cout<<endl;
    Intersection(arr1,arr2,m,n);
    return 0;
}