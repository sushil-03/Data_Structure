//Real answer 
#include<bits/stdc++.h>
#define  n 4
#define  m 4
using namespace std;
int Rec(int a[]){
    int left[n]={0};
    int right[m]={0};
    stack<int>myStack;
    for(int i=0;i<n;i++){
        if(myStack.empty()){
            left[i]=0;
            myStack.push(i);
        }
        else
        {
            while(!myStack.empty() && a[myStack.top()]>=a[i])
            myStack.pop();
            left[i]= myStack.empty()?0:myStack.top()+1;
            myStack.push((i));
        }
    }
    while(!myStack.empty()) myStack.pop();

    for(int i=n-1;i>=0;i--){
        if(myStack.empty()){
            right[i]=n-1;
            myStack.push((i));
        }
        else
        {
            while(!myStack.empty() && a[myStack.top()]>=a[i])
            myStack.pop();
            right[i] =myStack.empty()?n-1:myStack.top()-1;
            myStack.push(i);
        }
    }
    int area =0;
    for(int i =0;i<m;i++){
        area=max(area,a[i]*(right[i]-left[i]+1));
    }
    return area;

}
int result(int A[][m]){

int ans =Rec(A[0]);

int result =0;
for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
        if(A[i][j]){
            A[i][j]=A[i-1][j]+A[i][j];
        }
    }
    result =max(result,Rec(A[i]));
}
return result;

}
int main(){
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

cout<<result(matrix)<<endl;
    return 0;
}