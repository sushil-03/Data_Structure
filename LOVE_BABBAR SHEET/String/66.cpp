//All the permutation of the string
#include<bits/stdc++.h>
using namespace std;
void permutation(string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<ques.length();i++){
        char ch=ques[i];
        string rpart=ques.substr(0,i);//right part
        string lpart =ques.substr(i+1);//leftpart
        string roq =rpart +lpart;//restof the question
        permutation(roq,ans+ch);
    }
}
int main(){
    string str;
    cin>>str;
    permutation(str,"");
}