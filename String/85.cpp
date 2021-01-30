//Adjacent bracket balancing
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char>st;
    int ans=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='[')
        st.push(str[i]);
        else if(str[i]==']' && !st.empty() && st.top()=='[')
        st.pop();
        else if(str[i]==']'){
            int j=i+1;
            while(str[j]==']')
            j++;
            if(str[j]=='['){
                swap(str[i],str[j]);
                ans=ans+(j-i);
                st.push(str[i]);
            }
   }
}
    cout<<ans<<endl;
    return 0;
}