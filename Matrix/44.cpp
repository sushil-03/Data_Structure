#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=3,c=3;
    vector<vector<int>> matrix(r);
    for (int  i = 0; i < r; i++){
        matrix[i].assign(c,0);
        for (int j = 0; j < c; j++){
            int d;cin>>d;
            matrix[i][j]=d;
        }
    }
    int minR=0;
    int maxR =r-1;
    int minC =0;
    int maxC =c-1;
    int count =0;
    int tot =r*c;
    while(count<tot){
        for(int i=minR,j=minC;i<=maxR &&count < tot;i++){
            cout<<matrix[i][j]<<" ";
            count++;
        }
        minC++;
        for(int i=maxR,j=minC;j<=maxC &&count < tot;j++){
            cout<<matrix[i][j]<<" ";
            count++;
        }
        maxR--;
        for(int i=maxR,j=maxC;i>=minR &&count < tot;i--){
            cout<<matrix[i][j]<<" ";
            count++;
        }
        maxC--;
        for(int i=minR,j=maxC;j>=minC &&count < tot;j--){
            cout<<matrix[i][j]<<" ";
            count++;
        }
        minR++;
    }
 
    
    
}