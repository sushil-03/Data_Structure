//Meridian of two sorted array of different size
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar1[]={2, 3, 5, 8};
    int ar2[]={10, 12, 14, 16, 18, 20};
    int n=sizeof(ar1)/sizeof(ar1[0]);
    int m=sizeof(ar2)/sizeof(ar2[0]);
    int begin=0;
    int end=n;
    while(begin<=end){
        // cout<<"Running"<<endl;
        int i1= (begin+end)/2;
        int i2= (n+m+1)/2-i1;
        // This will distribute both side equally

        int min1= (i1==n)?INT32_MAX:ar1[i1];
        int min2= (i2==m)?INT32_MAX:ar2[i2];
        int max1= (i1==0)?INT32_MIN:ar1[i1-1];
        int max2= (i2==0)?INT32_MIN:ar2[i2-1];

    if(max1<=min2 && max2 <=min1){
        if((m+n)%2==0){
        cout<< (min(min1,min2)+max(max1,max2))/2;
            return 0;
        }else{
        cout<< (max(max1,max2));
        return 0;
        }
    }
    if(max1>min2)
    end=i1-1;
    if(max2>min1)
    begin =i1+1;
   
    }
    return 0; 
}