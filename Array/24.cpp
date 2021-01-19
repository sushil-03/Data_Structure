// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1 = 6,n2 = 5,n3 = 8;  
//     int a[] ={1, 5, 10, 20, 40, 80}, b[] ={6, 7, 20, 80, 100},c[] = {3, 4, 15, 20, 30, 70, 80, 120};

// unordered_map<int,int> m1,m2,m3;
// for (int  i = 0; i < n1; i++)   m1[a[i]]++;
// for (int  i = 0; i < n2; i++)   m2[b[i]]++;
// for (int  i = 0; i < n3; i++)   m3[c[i]]++;

// vector<int> v;
// for(int i=0;i<n1;i++){
//     if (m1[a[i]]  &&m2[a[i]] && m3[a[i]]){
//         v.push_back(a[i]);
//             m1[a[i]]=0;
//     }
// }
// for (int i = 0; i < v.size(); i++){
//     cout<<v[i]<<" ";
// }
// return 0;
// }







#include<bits/stdc++.h>
using namespace std;
int main(){
     int n1 = 3,n2 = 3,n3 = 3;  
     int a[] ={3, 3, 3}, b[] ={3, 3, 3},c[] = {3, 3, 3};
    int i,j,k;
    i=j=k=0;
    vector<int> v;
    while(i<n1 &&j<n2 &&k<n3){
        if(a[i]==b[j] && b[j]==c[k]){
            v.push_back(a[i]);
            i++;j++;k++;
        }
        else if(a[i]<b[j]) i++;
        else if(b[j]<c[k]) j++;
        else     k++;
        int aa =a[i-1];
        while(a[i]==aa) i++;
        int bb =b[j-1];
        while(b[j]==bb) j++;
        int cc =c[k-1];
        while(c[k]==cc) k++; 
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    
    return 0;
}















