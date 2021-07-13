// C++ program to find number of customers who couldn't get a resource. 
#include<bits/stdc++.h>
using namespace std;
int Solve(int n,string seq){
    int res;//result
    char check[200]={0};
    int occupied=0;
    for(int i=0;i<seq.size();i++){
        if(check[seq[i]]==0){
            check[seq[i]]=1;
            if(occupied<n){
                occupied++;
                check[seq[i]]=2;
            }
            else
            res++;
        }
        else
        {
            if(check[seq[i]]==2){
                occupied--;
                check[seq[i]]=0;
            }
            check[seq[i]]=0;
        }
    }
    return res;
}
int main(){
    cout<<Solve(3,"GACCBGDDBAEE");
    return 0;
}