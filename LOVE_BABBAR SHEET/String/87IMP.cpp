//Generate ip addres using regrex
#include<bits/stdc++.h>
#include<regex>
using namespace std;
int main(){
    string ip("255.255.111.35");
    // cin>>ip;
    // Number should range between  0 to 255 
    regex v4("([0-9] | [1-9][0-9] | 1[0-9][0-9] | 2[0-4][0-9]) | 25[0-5])\\.){3}([0-9] | [1-9][0-9] | 1[0-9][0-9] | 2[0-4][0-9] | 25[0-5])");
    if(regex_match(ip,v4)){
        cout<<"IPv4";
        return 0;
    }

    regex v6("((([0-9a-fA-f]){1,4})\\:){7}([0-9a-fA-F]){1-4}");
    if(regex_match(ip,v6)){
        cout<<"IPv6";
        return 0;
    }
    
}