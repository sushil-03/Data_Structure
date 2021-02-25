// Find the kth permutation sequence of first N natural number 
#include<bits/stdc++.h>
using namespace std;
vector<int>fact,digit;

void Solve(int n,int k,string& ans){
    if(n==1){
        ans+=to_string(digit.back());
        return;
    }

// THis run when we have more than  1 digit in digits array
    int index =  k/(fact[n-1]);//it define number of block to skip
    
    if(k%fact[n-1]==0)
    index -=1;

    ans+=to_string(digit[index]);
    digit.erase(digit.begin()+index);

    k -= fact[n-1] * index;//Decrease K value
    Solve(n-1,k,ans);
}

int main(){
    int n;cin>>n;
    int k;cin>>k;

// Getting factorial of number till n
    fact.push_back(1);
    int f=1;
    for(int i=1;i<n;i++){
        f*=i;
        fact.push_back(f);
    }

//getting digit in array
// in this we will keep track of digit 
    for(int i=1;i<=n;i++) 
    digit.push_back(i);

    string ans="";
    Solve(n,k,ans);
    cout<<ans<<endl;
    return 0;
}