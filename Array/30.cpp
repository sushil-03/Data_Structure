// Mooore Algorithm for n/2 only
#include<iostream>
using namespace std;
int main(){
    int arr[]={3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =n/2;
    
        int st =arr[0];
        int count =1;
    for (int i = 1; i < n; i++){
        if(arr[i]==st){
            count++;
        }
        else count --;
    
        if (count==0){
            st=arr[i];
            count =1;
        }
    }
    
    int couter =0;
    for (int i = 0; i < n; i++){
            if(st==arr[i]) couter++;
    }     
    cout<<st<<"  "<<couter;
    return 0;
}






























// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] ={2, 3, 3, 2 };
//     const int n = sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     int x =n/k;
//     unordered_map<int,int> m;
//     for (int i = 0; i < n; i++)
//     {
//         m[arr[i]]++;
//         // cout<<m[arr[i]]<<" ";
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(m[arr[i]]>x){
//             cout<<arr[i]<<" "<<m[arr[i]]<<endl;
//             m[arr[i]]=0;
//         }
//     }
//     return 0;
// }