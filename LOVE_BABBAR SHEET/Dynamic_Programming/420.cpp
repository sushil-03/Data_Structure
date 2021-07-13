//There are two assembly of car with  different station and there time we have to find minimum time to make a car complete
#include<bits/stdc++.h>
using namespace std;
int canAssembly(int a[][4],int t[][4],int e[],int x[]){
    int T1[4],T2[4];
    T1[0]=e[0]+a[0][0];
    T2[0]=e[1]+a[1][0];

    for(int i=1;i<4;i++){
        T1[i]=a[0][i] + min(T1[i-1],T2[i-1]+t[1][i]);
        T2[i]=a[1][i] + min(T2[i-1],T1[i-1]+t[0][i]);
    }
    return min(T1[3]+x[0],T2[3]+x[1]);
}
int main(){
    int a[][4]={{4,5,3,2},
                {2,10,1,4} };
    int t[][4]={{0,7,4,5},
                {0,9,2,8} };
    int e[]={10,12},x[]={18,7};
    cout<<canAssembly(a,t,e,x);

}