#include<iostream>
using namespace std;
void sort(int arr[],int n){
    
    for(int i=1;i<n;i++)
    {
         int current =arr[i];
         int j=i-1;
         while(arr[j]>current && j>=0)
         {
             arr[j+1] =arr[j];
             j--;
         }
         arr[j+1] =current;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    int k;
    cin>>k;
     for(int i =0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"largest kth element is " <<arr[n-k]<<endl;
    cout<<"smallest kth element is "<<arr[k-1];
    return 0;

}





