//Print all subsequence of a string 
#include<bits/stdc++.h>
using namespace std;
void print(string ques,string ans){
        if(ques.length()==0) {
            cout<<ans<<endl;
            return ;
        }
        char ch = ques[0];
        string roq =ques.substr(1);//rest of the question
        print(roq,ans+ch);//not blank
        print(roq,ans+"");//blank wala hai 

}
int main(){
    string str;
    cin>>str;
    print(str,"");
    return 0;
}