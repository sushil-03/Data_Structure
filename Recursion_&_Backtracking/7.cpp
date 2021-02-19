// Crossword Puzzle 
#include<bits/stdc++.h>
#define r 3
#define c 3
using namespace std;


bool canPlacedHorizontally(char puzzle[][c],int i,int j,string word){
    if(j-1 >=0 && puzzle[i][j-1]!='+'){
        return false;
    }else if(j+word.length()<r && puzzle[i][j+word.length()]!='+'){
        return false;
    }
    
        for(int jj=0;jj<word.length();jj++){
            if(j+jj >c)
            return false;
            if(puzzle[i][j+jj]=='-' || puzzle[i][j+jj]==word[jj])
            continue;
            else
            return false;
        }
    
return true;
}

bool canPlacedVertically(char puzzle[][c],int i,int j,string word){
    if(i-1>=0 && puzzle[i-1][j]!='+')
    return false;
    else if(i+word.length()<c && puzzle[i+word.length()][j]!='+')
    return false;
    else{
        for(int ii=0;ii<word.length();ii++){
            if(i+ii >r)
            return false;
            if(puzzle[i+ii][j]== '-' || puzzle[i+ii][j]==word[ii])
            continue;
            else
            return false;
        }
    }
    return true;
}


bool* placeHorizontally(char puzzle[][c],int i,int j,string word,bool weplaced[]){
    // bool weplaced[word.length()]={0};
    for(int jj=0;jj<word.length();jj++){
        if(puzzle[i][j+jj]=='-'){
            puzzle[i][j+jj]=word[jj];
            weplaced[jj]=true;
        }
    }
    return weplaced;
}
bool placedVertically(char puzzle[][c],int i,int j,string word,bool weplaced[]){
    // bool weplaced[word.length()]={0};
    for(int ii=0;ii<word.length();ii++){
        if(puzzle[i+ii][j]=='-'){
            puzzle[i+ii][j]=word[ii];
            weplaced[ii]=true;
        }
    }
    return weplaced;
}
void unplacedHorizontally(char puzzle[][c],int i,int j,string word,bool weplaced[]){
    for(int jj=0;jj<word.length();jj++){
        if(weplaced[jj]==true){
            puzzle[i][j+jj]='-';
        }
    }
}
void unplacedVertically(char puzzle[][c],int i,int j,string word,bool weplaced[]){
    for(int ii=0;ii<word.length();ii++){
        if(weplaced[ii]==true)
        puzzle[i+ii][j]='-';
    }
}

void print(char puzzle[][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<puzzle[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void Solve(char puzzle[][c],string str[],int idx,int n){
//   int z=sizeof(str)/sizeof(str[0]);
    if(idx==n){
        print(puzzle);
        return;
    }
    string word=str[idx];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(puzzle[i][j]=='-'|| puzzle[i][j]==word[0]){
                if(canPlacedHorizontally(puzzle,i,j,word)){
                   bool weplaced[word.length()]={0};
                    placeHorizontally(puzzle,i,j,word,weplaced);
                    Solve(puzzle,str,idx+1,n);
                    unplacedHorizontally(puzzle,i,j,word,weplaced);
                }
                if(canPlacedVertically(puzzle,i,j,word)){
                    bool weplaced[]={0};
                    placedVertically(puzzle,i,j,word,weplaced);
                    Solve(puzzle,str,idx+1,n);
                    unplacedVertically(puzzle,i,j,word,weplaced);
                }
            }
        }
    }
}



int main(){
    char puzzle[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>puzzle[i][j];
        }
    }
    cout<<endl<<"Enter length"<<endl;
    int n;cin>>n;
    string word[n];
    for(int i=0;i<n;i++){
        cin>>word[i];
    }
    Solve(puzzle,word,0,n);
}