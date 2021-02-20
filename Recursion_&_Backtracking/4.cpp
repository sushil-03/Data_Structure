// Maximum Score Problem
// To make a set in which the frequency of word should not be greater than given frequency
#include<bits/stdc++.h>
using namespace std;
int Solve(string str[],int score[],int freq[],int idx,int n){
//    cout<<n<<endl;
    if(idx==n)
    return 0;
    int sno = Solve(str,score,freq,idx+1,n);
    int ssf=0;//score so far
    string word=str[idx];
    bool flag=true;

    for(int i=0;i<word.length();i++){
        if(freq[word[i] - 'a']==0){
            flag =false;
        }
            freq[word[i]-'a']--;
            ssf += score[word[i]-'a'];
        
    }
    int sys=0;//yes
    if(flag){
        sys = ssf+ Solve(str,score,freq,idx+1,n);
    }
    for(int i=0;i<word.length();i++){
        freq[word[i] - 'a']++;
    }
    return max(sys,sno);

}
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    // cout<<"Ener letter size"<<endl;
    int no_of_letter;
    cin>>no_of_letter;
    char letter[no_of_letter];
    for(int i=0;i<no_of_letter;i++)
    cin>>letter[i];
// cout<<"Score value"<<endl;
    int score[26];
    for(int i=0;i<26;i++)
    cin>>score[i];

    int freq[26]={0};
    for(char c :letter){
        freq[c-'a']++;
    }
    cout<<Solve(str,score,freq,0,n);
    return 0;
}
// 
// 
// 4
// dog   
// cat
// dad
// good
// 9
// a
// b
// c
// d
// d
// d
// g
// o
// o
// 1
// 0
// 9
// 5
// 0
// 0
// 3
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 2
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0