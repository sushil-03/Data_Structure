// Aggressive cows Time complexity O(nlogn)g
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    
    int stall[n];
    for(int i=0;i<n;i++)
    cin>>stall[i];
    
    sort(stall,stall+n);
   
    int lb=1;
    long int ub =1e9;
    int ans=0;
    
    while(lb<=ub){
        int mid =(lb+ub)/2;
        int cows=1;
        int prev=stall[0];
        for(int i=1;i<n;i++){
            if(stall[i]-prev>=mid){
            cows++;
            prev =stall[i];
            if(c==cows)
            break;
            }
        }
        if(cows==c){
            ans =mid;
            lb=mid+1;
        }
        else 
        ub= mid-1;
    }


    cout<<"Required ans :"<<ans<<endl;
}