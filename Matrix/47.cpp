#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=4,c=4;
    vector<vector<int >>matrix(r);
    for(int i=0;i<r;i++){
        matrix[i].assign(c,0);
        for (int j = 0; j < c; j++){
           int d;cin>>d;
           matrix[i][j] =d; 
        }
    }int ans=-1;
    int j=c-1;
    for(int i=0;i<r;i++){
    while(j>=0 && matrix[i][j]==1){
        j--;
        ans =i;
    }
    }
    cout<<ans;
    return 0;
}