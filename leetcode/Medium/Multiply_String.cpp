#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"


*/

string multiply(string num1, string num2) {
  if(num1=="0" or num2=="0")
      return "0";
    int n1,n2,carry=0;
    char map[10]={'0','1','2','3','4','5','6','7','8','9'};
    int k=0;
    int limit=0;
    int sum;
    int res[40050]={0};
    for(int i= num1.size()-1;i>=0;i--){
        n1= num1[i]-'0';
        int p=k;
        carry=0;
          
        for(int j=num2.size()-1;j>=0;j--,p++){
            n2=num2[j]-'0';
        sum = carry+res[p]+(n1*n2);
            
            carry = sum/10;
            res[p] = sum%10;
            limit=p;
        }
        if(carry>0){
            res[p]=carry;
            limit=p;
        }
        k++;
      }
      
      string str="";
      for(int i=limit;i>=0;i--){
          str+=map[res[i]];
    }
  return str;
        
}

int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
string s="123";
string s2="456";
cout<<multiply(s,s2);

}