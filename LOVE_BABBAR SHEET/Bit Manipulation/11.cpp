// Reduce N to 1(Minimum number of operation to make N =1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=15;
    int res=0;
    while(n!=0){
        if(n%2==0){
            n=n/2;
        }else if(n==3){
            res=2;
            break;
        }else if(n%4==1){//(n&4==1)
            n-=1;
        }else if(n%4==3){//(n&4==3)
            n+=1;
        }
        res++;
    }

    cout<<res;
}