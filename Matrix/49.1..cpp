// LARGEST RECTANGLE IN HISTOGRAM     ARRAY
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int >rec;
    int n=5;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        rec.push_back(d);
    }
    int left[n],right[n];
    stack<int> stack;
    for(int i=0;i<n;i++){
        if(stack.empty()){
            left[i]=0;stack.push(i);
        }
        else{
            while(!stack.empty() && rec[stack.top()]>=rec[i])
            stack.pop();
            left[i] = stack.empty()?0:stack.top()+1;
            stack.push((i));
        }
    }
    while(!stack.empty()) stack.pop();
    for(int i=n-1;i>=0;i--){
        if(stack.empty()){
            right[i]=n-1;stack.push(i);
        }
        else
        {
            while(!stack.empty() && rec[stack.top()]>=rec[i])
            stack.pop();
            right[i] = stack.empty()? n-1:stack.top()-1;
            stack.push((i));
        }
    }
    int mx_area=0;
    for(int i=0;i<n;i++)
    mx_area =max(mx_area,rec[i]*(right[i]-left[i]+1));
    cout<<mx_area<<endl;
    return 0;
}