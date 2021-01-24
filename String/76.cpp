#include<bits/stdc++.h>
using  namespace std;
int Solve(string str){
    int n =str.length();
    if(n%2)
    return -1;
    stack<char>st;
    for(int i=0;i<n;i++){
    if(str[i]=='}' && !st.empty()){
        if(st.top()=='{')
        st.pop();
        else
        st.push(str[i]);
    }
    else
    st.push(str[i]);
 }
// cout<<st.size()<<endl;
int m=st.size();
int c=0;
while( !st.empty() && st.top()=='{'){
    st.pop();
    c++;
}

return (m/2 + c%2);
}
int main(){
    string str;
    cin>>str;

    cout<<Solve(str)<<endl;
}