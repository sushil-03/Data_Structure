#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,temp;
    cin>>str;
    temp = str;
    //Reversing
    int n =str.size();
    for (int  i = 0; i < n/2; i++){
        char temp1 = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp1;
    }
    if(temp == str){
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome "<<endl;
    }
    return 0;   
}