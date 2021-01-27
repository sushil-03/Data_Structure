//Longest Common Prefix with Vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"NOw enter"<<endl;
    vector<string>strs;
    for(int i=0;i<4;i++){
        string s;cin>>s;
        strs.push_back(s);
    }
    // if(strs.size()==0)
    // return -1;
    string temp=strs[0];
    for(int i=1;i<strs.size();i++){

        for(int j=0;j<temp.size();j++){

            if(temp[j]!=strs[i][j])
            temp.erase(temp.begin()+j,temp.end());
        }
    }
    cout<<temp;
    return 0;
}

// eeksforgeeks", "geeks", 
					// "geek", "geezer"