#include<iostream>
using namespace std;
int main(){
    string str;cin>>str;
    int x=0,y=0,c=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='0') x++;
        else 
        y++;

        if(x==y) 
        c++;

    }
        if(x!=y)
            return -1;
    
    cout<<c<<endl;
    return 0;

}