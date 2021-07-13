#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=3,c=4;
    int target;cin>>target;
    vector<vector<int> > matrix(r);
    for (int i = 0; i < r; i++){
        matrix[i].assign(c,0);
        for(int j = 0; j < c; j++){
            cin>>matrix[i][j] ;
                    }
    }
    int j =c-1;
    int k=0;
    while(k<r &&j>=0){

        if(matrix[k][j]==target){
           cout<<"1"<<endl;
           return 0;
           }
        else if(matrix[k][j]>target)
            j--;
            else
                k++;
    }
    cout<<"0"<<endl;      
    return 0;
}