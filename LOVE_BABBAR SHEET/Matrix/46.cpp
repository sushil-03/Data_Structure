#include<bits/stdc++.h>
using namespace std;
int main(){
   int r=3,c=3;
   vector<vector<int> >matrix(r);
   for(int i=0;i<r;i++){
       matrix[i].assign(c,0);
       for (int  j = 0; j < c; j++){
          int d;
          cin>>d;
          matrix[i][j]=d; 
       }
   }
   int min =INT32_MAX;
   int max =INT32_MIN;
   for(int i=0;i<r;i++){
       if(matrix[i][0]<min)
       min =matrix[i][0];

       if(matrix[i][c-1]>max)
       max=matrix[i][c-1];
   }
   int desired = (r*c+1)/2;

    while(min<max){
        int mid = (min+max)/2;
        int place =0;
        for(int i=0;i<r;++i)
           place +=  upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
        if(place<desired) min =mid+1;

        else
        {
            max=mid;
        }
    }       
    cout<<min;
    return 0;
}
