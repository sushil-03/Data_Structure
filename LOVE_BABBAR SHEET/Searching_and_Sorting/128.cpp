// Arithmetic Number 
#include<bits/stdc++.h>
using namespace std;
bool Solve(int a,int b,int c){
    if(!c)
    return false;
    
    int res = (b-a)/c;
    return (b-a)%c==0 && res>=0;
}
int main(){
    int a,b,c;// T.P (a+c==b)
    cin>>a>>b>>c;
    if(Solve(a,b,c))
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    return 0;
}