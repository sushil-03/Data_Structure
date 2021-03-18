// Maximum length of pair chain 
#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int>&p,vector<int>&q){
    return p[1]<q[1];
}
int main(){
    int r=3;
    int c=2;
    vector<vector<int>>pair(r);
    for(int i=0;i<r;i++){
        pair[i].assign(c,0);
        for(int j=0;j<c;j++){
            cin>>pair[i][j];
        }
    }
    sort(pair.begin(),pair.end(),comp);
    int len=1;
    int k=0;
    for(int i=1;i<r;i++){
        if(pair[k][1]<pair[i][0]){
            k=i;
            len++;
        }
    }

cout<<len;
}