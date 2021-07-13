// TIME OMPLEXITY IS O(nlogn)  using merge sort
#include<iostream>
using namespace std;
int merge(int a[],int temp[],int lo,int mid,int up){
    int i,j,k,inv=0;
    i=lo;
    j=mid;
    k=lo;
    while(i<=mid-1 && j<=up){
        if(a[i]<a[j])  temp[k++] =a[i++];
        else{
            temp[k++] =a[j++];
            inv +=(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++] =a[i++];
    }
     while(j<=up){
        temp[k++] =a[j++];
    }
    for (int m = lo; m <= up; m++)
    {
        a[m] =temp[m];
    }
    return inv;
    
}
int mergesort(int arr[],int temp[],int lo,int up){
    int inv =0;
    if(lo<up) {
    int mid = (lo+up)/2;
    inv +=  mergesort(arr,temp,lo,mid);
    inv +=  mergesort(arr,temp,mid+1,up);
    inv +=  merge(arr,temp,lo,mid+1,up);
    }
    return inv;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    int temp[n];
    cout<<mergesort(arr,temp,0,n-1);
    return 0;
}



















// BRUTE FORCE  
// TIME COMPLEXITY IS   O(n*n)

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,4,1,3,5};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     int count =0;
//     for(int i=0;i<n-1;i++){
//         for (int j = i+1; j < n; j++){
//             if(arr[i]>arr[j])
//             count++;
//         }
        
//     }
//     cout<<count<<endl;
// }


