//Rat Maze Problem
#include<bits/stdc++.h>
#define n 4
using namespace std;

bool isSafe(int maze[][n],int x,int y){
if(x>=0 && y>=0 && x<n && y<n && maze[x][y]==1)
return true;
return false;
}


bool Solution (int maze[][n],int x,int y,int final[][n]){
   if(x==n-1 && y==n-1 && maze[x][y]==1){
   final[x][y]=1;
   return true;
   }

   
    if(isSafe(maze,x,y)){
        final[x][y]=1;
// This is false because Sometime its goes right and sometime it goes down 
        // Solution(maze,x+1,y,final);
        // Solution(maze,x,y+1,final);


        if(Solution(maze,x+1,y,final)){
            return true;
        }
        if(Solution(maze,x,y+1,final)){
            return true;
        }
        final[x][y]=0;
    }
        return false;
}
void printPath(int sol[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int maze[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }    
    int final_path[n][n]={0};
    if(Solution(maze,0,0,final_path)){
        printPath(final_path);
    }
    else{
        cout<<"Rat can't reach there "<<endl;
    }
    return 0;
}