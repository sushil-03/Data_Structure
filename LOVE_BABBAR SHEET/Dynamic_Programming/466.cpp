// Maximum Sum rectangle
#include<bits/stdc++.h>
using namespace std;
int Kadane(int a[],int n){
    int curr=a[0];
    int ovsum=a[0];
    for(int i=1;i<n;i++){
        if(curr>0){
            curr+=a[i];
        }else{
            curr=a[i];
        }
        ovsum=max(ovsum,curr);
    }
    return ovsum;
}
int main(){
    int row,cols;
    cin>>row>>cols;
    int matrix[row][cols];
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    int ans=0;

    for(int c1=0;c1<cols;c1++){
        int rowSum[row]={0};
        for(int c2=c1;c2<cols;c2++){
            
            for(int i=0;i<row;i++){
                rowSum[i]+=matrix[i][c2];
            }
            ans=max(ans,Kadane(rowSum,row));
        }
    }
    cout<<ans;
}