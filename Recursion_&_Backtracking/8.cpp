// Cryptarithmetic Puzzle
// we have to map string with digit 0-9 such that sum of two string is equal to other string
#include<bits/stdc++.h>
using namespace std;
int getNum(string s1,map<char,int>CharInMap){
    string num="";//we want string  remember
    for(int i=0;i<s1.length();i++){
        num+=to_string(CharInMap[s1[i]]);
    }
    
    return stoi(num);//stoi funtion convert string into integer
}


void Solve(string unique,int idx,map<char,int>CharInMap,bool usedNumber[],string s1,string s2,string s3){
    if(idx==unique.length()){
        int num1 =getNum(s1,CharInMap);
        int num2 =getNum(s2,CharInMap);
        int num3 =getNum(s3,CharInMap);

        if(num1 +num2==num3){//printing in alphabetical order
           cout<<num1<<" "<<num2<<" "<<num3<<endl;
           
            for(int i=0;i<26;i++){
                char ch = (char)('a'+i);
                if(CharInMap.find(ch)!=CharInMap.end()){
                    cout<<ch;
                    cout<<"-";
                    cout<<CharInMap[ch];
                    cout<<" ";
                }
            }
            cout<<endl<<endl;
        }
        return;
    }
    char ch =unique[idx];
    for(int i=0;i<=9;i++){
        if(usedNumber[i]==false){
            CharInMap[ch]=i;
            usedNumber[i]=true;
            Solve(unique,idx+1,CharInMap,usedNumber,s1,s2,s3);
            usedNumber[i]=false;
            CharInMap[ch]=-1;
        }
    }
    return;
}

int main(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    map<char,int>CharInMap;
    string unique="";
    for(int i=0;i<str1.length();i++){
        if(CharInMap.find(str1[i])==CharInMap.end()){
           CharInMap[str1[i]]=-1;
            unique +=str1[i];
        }
    }
    for(int i=0;i<str2.length();i++){
        if(CharInMap.find(str2[i])==CharInMap.end()){
            CharInMap[str2[i]]=-1;
            unique +=str2[i];
        }
    }
    for(int i=0;i<str3.length();i++){
        if(CharInMap.find(str3[i])==CharInMap.end()){
            CharInMap[str3[i]]=-1; 
            unique +=str3[i];
        }
    }
    bool usedNumber[10]={0};
  
    Solve(unique,0,CharInMap,usedNumber,str1,str2,str3);
    return 0;
}