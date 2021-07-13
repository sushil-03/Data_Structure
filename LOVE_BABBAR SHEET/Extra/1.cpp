//Next Greater Element on the right with o(n);
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,5,1,4,3,1,4,7,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    st.push(arr[n-1]);
    int ans[n-1]={0};    
    for(int i=n-2;i>=0;i--){
        while(!st.empty() && arr[i]>st.top())
        st.pop();

        if(st.size()==0)
        ans[i]= -1;
        else{
        ans[i] =st.top();
        }
        st.push(arr[i]);
    }
   int m =sizeof(ans)/sizeof(ans[0]);
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }



    return 0;
}