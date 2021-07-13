// Print abbreviation pep  pe1 p1p p2
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="pep";
    vector<string>res;
    int count=0;
    for(int i=0;i<(1<<str.length());i++){

        for(int j=0;j<str.length();j++){
            int ch=str[j];
            int b = str.length()-1-j;
            
            if((i & (1<<b))==0){
                if(count ==0){
                    res[i]+=ch;
                }else{
                    res[i]+=to_string(count);
                    res[i]+=ch;
                    count =0;
                }
            }else{
                count++;
            }
        }
    }
}