// Number of flips to make alternate binary 00100100101
#include<bits/stdc++.h>
using namespace std;
int alternate(char ch){
 return ch=='0'?'1':'0';
}
int Solve(string str,char  num){
    int flip=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=num)
        flip++;
        
        num =alternate(num);
    }
    return flip;
}
int main(){
    string str;
    cin>>str;
    int ans1 =Solve(str,'1');
    int ans2 =Solve(str,'0');
    cout<<min(ans1,ans2)<<endl;
    return 0;

}