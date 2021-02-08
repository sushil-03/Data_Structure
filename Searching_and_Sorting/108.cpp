//Find majority element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

//Using Moore Algorithm/
int count=1;
int str=a[0];
for(int i=1;i<n;i++){
    if(a[i]==str)
    count++;
    else
    count--;

    if(count==0){
        str=a[i];
        count=1;
    }
}
int counter=0;
for(int i=0;i<n;i++){
    if(a[i]==str)
    counter++;
}
if(counter >n/2){
    cout<<str<<endl;
    return 0;
}
else{
    cout<<"-1"<<endl;
    return 0;
}

}
