//Chechk if the string are isomorphic
#include<bits/stdc++.h>
using namespace std;
bool Isomorphic(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    if(n!=m)
    return false;

    int map[256]={0};
    bool marked[256];

    for(int i=0;i<n;i++){
        if(map[str1[i]]==0){
            if(marked[str2[i]]==true)//Pehle aa rkha hai
            return false;

            marked[str2[i]]=true;
            map[str1[i]]=str2[i];
        }
        else if(map[str1[i]]!=str2[i])
        return false;

    }
return true;
}
int main(){
    string str1={"aab"};
    string str2={"xxy"};

    cout<<Isomorphic(str1,str2);
    return 0;
}