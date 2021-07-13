//No two adjacent character lie with each other
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="geeksforgeeks";
    int n=str.length();
    unordered_map<int,int>m;
    int max=0;
    for(int i=0;i<n;i++){
        m[str[i]]++;

        if(m[str[i]]>max){
            max=m[str[i]];
        }
    }
    if(max<=n-max+1) cout<<"1"<<endl;
    else
    cout<<"0"<<endl;

    return 0;
}