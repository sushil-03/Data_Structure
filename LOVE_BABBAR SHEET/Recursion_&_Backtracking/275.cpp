// Printing path in string
#include<bits/stdc++.h>
#define n 4
using namespace std;
void Solution(int maze[][n],vector<string>& res,string path,int i,int j){
    if(i<0 || j<0 || i>=n || j>=n || maze[i][j]!=1){
        return;
    } 
    if(i==n-1 && j==n-1){
        res.push_back(path);
        return ;
    }
    maze[i][j]=-1;
    Solution(maze,res,path+'D',i+1,j);
    Solution(maze,res,path+'U',i-1,j);
    Solution(maze,res,path+'R',i,j+1);
    Solution(maze,res,path+'L',i,j-1);
    maze[i][j]=1;
}

vector<string>findPath(int maze[n][n]){
    vector<string>res;
    string path="";
    Solution(maze,res,path,0,0);
    sort(res.begin(),res.end());
    return res;
}
int main(){
    int maze[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    vector<string>ans=findPath(maze);
    if(ans.size()==0){
        cout<<-1;
    }else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}