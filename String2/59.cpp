#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>>str1>>str2;
   int l1= str1.size();
   int l2 =str2.size();
   if(l1!=l2){
       cout<<"No"<<endl;
   } 
   else
   {
       string temp =str1+str1;
       if(temp.find(str2)!= string ::npos)
       cout<<"Yes"<<endl;
       else
       cout<<"No"<<endl; 
   }
   
}