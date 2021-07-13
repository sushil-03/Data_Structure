//Word Wrap
#include<bits/stdc++.h>
using namespace std;
void print(int p[],int n){
    if(p[n]==1){
        cout<<p[n]<<" "<<n<<" ";
    }
    else{
        print(p,p[n]-1);
        cout<<p[n]<<" "<<n<<" ";
        return ;
    }

}
int main(){
    int inf=INT32_MAX;
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int m;cin>>m;//character allowed per line

    int space[n+1][n+1];//total space 
    int ls[n+1][n+1];//it takes all the square of line that is cost of all possibilities
    int c[n+1];//it store all the optimal answer to a particular index
    int p[n+1];//printing answer


//This will fill all the space 
    for(int i=1;i<=n;i++){
        space[i][i]= m - arr[i];
        for(int j=i+1;j<=n;j++){
            space[i][j] = space[i][j-1] -arr[j] -1;
        }
    }
    
//this will take all the cost of the lin0
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(space[i][j]<0) 
            ls[i][j]=inf;
            else if(j==n &&space[i][j]>=0)
            ls[i][j]=0;
            else{
                ls[i][j]=space[i][j]*space[i][j];
            }
            
        }
    }

//this will store optimal answer only
    c[0]=0;
    for(int i=1;i<=n;i++){
        c[i]=inf;
        for(int j=1;j<=i;j++){
            if(c[j-1]!=inf && ls[j][i]!=inf && c[j-1]+ls[j][i] < c[i]){
                c[i] =c[j-1] +ls[j][i];
                p[i]=j;
            }
        }
    }

    print(p,n);
}