#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c1,c2,c3;
    c1=c2=c3=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0) c1++;
        if(arr[i]==1) c2++;
        if(arr[i]==2) c3++;
    }
    int k=0;
    for (int i = 0; i < c1; i++)  arr[k++]=0;
    for (int i = 0; i < c2; i++)  arr[k++]=1;
    for (int i = 0; i < c3; i++)  arr[k++]=2;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}