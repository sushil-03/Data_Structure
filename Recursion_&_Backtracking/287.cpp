// Largest Number in k swaps
#include<bits/stdc++.h>
using namespace std;

void Solve(string str,int swa,string& mx){
    if(swa==0)
    return;

    for(int i=0;i<str.length()-1;i++){
        for(int j=0;j<str.length();j++){
            if(str[j]>str[i]){
                swap(str[i],str[j]);
                if(str.compare(mx)>0){
                    mx=str;
                }
                Solve(str,swa-1,mx);
                swap(str[i],str[j]);
            }
        }
    }
    
}
int main(){
    string str;
    cin>>str;
    int swap;
    cin>>swap;
    string mx=str;
    Solve(str,swap,mx);
    cout<<mx<<endl;
    return 0;
}