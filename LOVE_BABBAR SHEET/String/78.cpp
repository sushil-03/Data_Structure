#include<bits/stdc++.h>
using namespace std;
int Solve(int i,int j,string str,char ch[6][6],int idx,int size){
    int found =0;
    if(i>=0 &&j>=0 &&j<6 && i<6 && str[idx]==ch[i][j]){
        int temp = str[idx];
        ch[i][j] =0;
        idx +=1;
        if(idx==size) 
        found =1;
        else
        {
            found +=Solve(i-1,j,str,ch,idx,size); 
            found +=Solve(i+1,j,str,ch,idx,size); 
            found +=Solve(i,j-1,str,ch,idx,size); 
            found +=Solve(i,j+1,str,ch,idx,size); 
        }
        ch[i][j] =temp;
    }
    return found;
}
int main(){
    string str ="MAGIC";
    char ch[6][6]={
            {'B','B','A','B','B','M'},
            {'C','B','M','B','B','A'},
            {'I','B','A','B','B','G'},
            {'G','O','Z','B','B','I'},
            {'A','B','B','B','B','C'},
            {'M','C','I','G','A','M'}
            };
    int size =str.size();
    // cout<<str.size()<<endl;
    int ans =0;
    // static int r =sizeof(ch)/sizeof(ch[0]);
    // static int c =sizeof(ch[0])/sizeof(ch[0][0]);
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            ans +=Solve(i,j,str,ch,0,size);
        }
    }        
    cout<<ans<<endl;
    return 0;
}