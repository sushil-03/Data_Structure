#include<bits/stdc++.h>
using namespace std;
int Sotp(int a[],int n){
    int current =1;
    while(n<current){
        for(int i=0;i<n-current;i++){
        if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
        }
        current++;
    }
    return 0;
}
int main(){
    int r=4,c=4;
    vector<vector<int> > matrix(r);
    for (int  i = 0; i < r; i++){
       matrix[i].assign(c,0); 
       for(int j =0;j<c;j++){
           int d;cin>>d;
           matrix[i][j]=d;
       }
    }
    int k=0;
    int arr[r*c] ={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[k++] =matrix[i][j];
        }
    }
    int n =sizeof(arr)/sizeof(arr[0]);
    Sotp(arr,n);
        k =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            matrix[i][j]=arr[k++];
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}