#include<bits/stdc++.h>
using namespace std;
bool result(int a[],int n,int sum){
    sort(a,a+n);
    for (int i = 0; i < n-2; i++){
        int j=i+1;
        int r =n-1;
        while(j<r){
            if(a[i]+a[j]+a[r]  == sum)
            {cout<<"1";cout<<a[i]<<" "<<a[j]<<" "<<a[r]<<endl;
            return true;}
            else if(a[i]+a[j]+a[r]<sum) j++;
            else r--;
        }
    }
    cout<<"Nothing ";
    return false;
}
int main(){
    int arr[] ={1, 4, 45, 6, 10, 8 };
    int n =sizeof(arr)/sizeof(arr[0]);
    int sum = 22;
    result(arr,n,sum);
    return 0;

}