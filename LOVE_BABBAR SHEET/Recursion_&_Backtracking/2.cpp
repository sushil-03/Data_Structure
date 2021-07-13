// Print Abbreviations using Recurrsion
#include<bits/stdc++.h>
using namespace std;
void Solve(string str,string asf,int count,int pos){//position
    if(pos==str.length()){
    if(count==0)
         cout<<asf<<endl;   
    else
    cout<<asf+to_string(count)<<endl;
    return;
    }

    if(count>0){//taking
    Solve(str,asf+to_string(count)+str[pos],0,pos+1);
    }else
    Solve(str,asf+str[pos],0,pos+1);

    Solve(str,asf,count+1,pos+1);//not taking
}
int main(){
    string str;
    cin>>str;
    string temp="";
    Solve(str,temp,0,0);
    return 0;
}