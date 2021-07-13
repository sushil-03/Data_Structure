//Rotate matrix by 90
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r=3,c=3;
    vector< vector<int>>matrix(r);
    for(int i=0;i<r;i++){
        matrix[i].assign(c,0);
        for(int j=0;j<c;j++){
            int d;cin>>d;
            matrix[i][j]=d;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            int temp =matrix[i][j];
            matrix[i][j] =matrix[j][i];
            matrix[j][i]  =temp;
        }
    }

    for(int i=0;i<r;i++){
        int li=0;
        int ri =c-1;
        while(li<ri){
            int temp =matrix[i][li];
            matrix[i][li] =matrix[i][ri];
            matrix[i][ri] =temp;
            li++;
            ri--;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
