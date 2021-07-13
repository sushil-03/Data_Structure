#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=4,c=5;
    vector<vector<int> > mat(r);
    for(int i=0;i<r;i++){
        mat[i].assign(c,0);
        for(int j=0;j<c;j++)
        cin>>mat[i][j];
    }
    unordered_map<int,int>m;
    for(int i=0;i<c;i++)
    m[mat[0][i]]=1;

    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            if(m[mat[i][j]]==i){
                m[mat[i][j]]++;

                if(i==r-1)
                cout<<mat[i][j]<<" ";
            }
        }
    }
    return 0;
}
