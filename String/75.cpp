#include<bits/stdc++.h>
using namespace std;
string Solve(string str[],string check){
    string temp ="";
    for(int i=0;i<check.length();i++){
        if(check[i] == ' ')
        temp = temp+'0';
        else
        {
            temp = temp +str[check[i]-'A'];
        }
    }
    return temp;
}
int main(){
    string str[] = {"2","22","222", "3","33","333", "4","44","444", "5","55","555", "6","66","666", "7","77","777","7777", "8","88","888", "9","99","999","9999"
                   }; 
    string check;
    cin>>check;
    cout<<Solve(str,check);

  
}