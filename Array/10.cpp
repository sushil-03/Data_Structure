// Move all the negative elements to one side of the array 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n],b[n]={0},c[n]={0},d[n];
//     int k=0,l=0,m=0;
//     for (int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++){
//         if(arr[i]<=0){
//             b[m] =arr[i];
//             m++;
//         }    
//         else{
//             c[k] =arr[i];
//               k++; 
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(b[i]){
//         d[l] =b[i];
//         l++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(c[i]){
//         d[l] =c[i];
//         l++;
//         }
//     }
//     for (int i = 0; i < n; i++){
//         cout<<d[i]<<" ";
//     } 
// }

// 2
#include<iostream>
using namespace std;
void oneSided(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0){
            if(j!=i)
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {1,26,-3,-4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    oneSided(arr,n);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}




























