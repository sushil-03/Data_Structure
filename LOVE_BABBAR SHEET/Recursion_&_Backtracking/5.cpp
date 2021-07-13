// Game of Execution in this we have n people and get killed in k series
#include<bits/stdc++.h>
using namespace std;
int Solve(int n,int k){
    if(n==1)
    return 0;
    int x=Solve(n-1,k);
    int y=(x+k)%n;
    return y;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<Solve(n,k);
    return 0;
}
// In this firstly we definitely get 0 at the end of first function then it only mapped its value
// 5  3 it give answer as 3 
