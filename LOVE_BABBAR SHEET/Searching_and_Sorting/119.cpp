#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int power[n];
    for(int i=0;i<n;i++)
    cin>>power[i];

    int rounds;
    cin >>rounds;
    while(rounds--){
        int counter=0;
        int sum=0;
        int bishu;
        cin >>bishu;
        for(int i=0;i<n;i++){
            if(power[i]<=bishu){
                counter++;
                sum+=power[i];
            }
        }
        cout<<counter<<" "<<sum<<endl;
    }
    return 0;
}