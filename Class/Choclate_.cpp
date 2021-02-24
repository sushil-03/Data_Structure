// choclate wrapper prize
#include<bits/stdc++.h>
using namespace std;

int Solve(int choc,int wrap){
    if(choc<wrap)
    return 0;
    int newChoc= choc/wrap;

    return newChoc+Solve(newChoc + choc % wrap,wrap);
}

int main(){
    int mon,pri,wrap;
    cin>>mon>>pri>>wrap;

    int choc=mon/pri;
    cout<<choc+Solve(choc,wrap);
    
}