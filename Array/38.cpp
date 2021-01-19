#include<iostream>
using namespace std;
int main()
{
    // 2 1 5 6 3  i of jumps to gather aroung 3
    int a[]={2 ,1 ,5 ,1 ,3};
    int n=sizeof(a)/sizeof(a[0]);
    int k =3;
    int mi =INT32_MAX;
    int good=0,bad=0;
    for(int i=0;i<n;i++){
        if(a[i]<=k)  good++;
    }
    for (int  i = 0; i < good; i++){
        if(a[i]>k) bad++;
    }
    int i=0,j=good-1;
    while(j<n) {
        mi=min(mi,bad);
        j++;
        if(a[j]>k&&j<n) bad++;
        if(a[i]>k) bad--;
        i++;
    }
    if(mi==INT32_MAX)cout<<"0\n";
    cout<<mi<<endl;
    return 0;
}