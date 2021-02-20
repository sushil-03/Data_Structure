// Friends Pairing 
// in this we have to pair one friend with other in which vice versa of number is true(1,2)=(2,1)
#include<bits/stdc++.h>
using namespace std;

void Solve(int pos,int n,bool check[],string asf){
    if(pos>n){
        cout<<asf<<endl;
        return;
    }

    if(check[pos]==true){
        Solve(pos+1,n,check,asf);
    }else{
        check[pos]=true;
        Solve(pos+1,n,check,asf+"("+to_string(pos)+")");//akele jana chahta hai
        for(int j=pos+1;j<=n;j++){
            if(check[j]==false){
                check[j]=true;
                Solve(pos+1,n,check,asf+"("+to_string(pos)+to_string(j)+") " );
                check[j]=false;
            }
        }
        check[pos]=false;
    }
}
int main(){
    int n;
    cin>>n;
    bool check[n+1]={0};
    Solve(1,n,check,"");
    return 0;
}