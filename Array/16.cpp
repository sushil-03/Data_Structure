// Time complexity o[n*n]

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,5,2,4,7,5,6,6,7,1};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++)
//     {
//         for(int j = i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//         }
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    for (int i = 0; i < n; i++)
    {
        arr[arr[i]%n] = arr[arr[i]%n] +n;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]/n>1){
            cout<<i<<endl;
        }
    }
    return 0;
}