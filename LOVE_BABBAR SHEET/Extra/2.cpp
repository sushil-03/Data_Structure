//Sliding Window Maximum     Not completed
#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={2,5,1,4,3,1,4,7,4};
 int m =4;//how much slide
 int n =sizeof(arr)/sizeof(arr[0]);
 int ans[n-1]={0};
 stack<int>st;
 st.push(n-1);
 for(int i=n-2;i>=0;i--){
     while(!st.empty() && arr[i]>=arr[st.top()])
     st.pop();

     if(st.size()==0){
         ans[i]= -1;
     }
     else
     ans[i]=st.top();
     
     st.push(i);
 }//next greater element found
 

 int m =sizeof(ans)/sizeof(ans[0]);
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }












 int j=0;
 for(int i=0;i<= n-m;i++){
     if(j<i)
     j=i;
     while(ans[j]<i+m)
     j=ans[i];

     cout<<arr[j];
 }
return 0;
}