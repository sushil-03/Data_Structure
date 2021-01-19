#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> prices;
    int size ; cin>>size;
    for(int i=0;i<size;i++){
        int n;
        cin>>n;
        prices.push_back(n);
    }
 int maxprofit =0;
 for (int  i = 0; i < size-1; i++){
     for (int j = i+1;j < size; j++){
        int profit = prices[j]-prices[i];
        if(profit>maxprofit){
            maxprofit =profit;
        }        
     }
     
 }
 
    cout<<maxprofit;
    return 0;
}