#include<stdio.h>
int main()
{
    int i=0;
    int n=7,x=0;
    int t=n;
    for(int i=1;i<=n*n;i++){
        for(int j=i;j<i+t;j++){
            printf("%d",j);
            if(j<i+(t-1)){
                printf("*");
            }
        }
        x=x+2;
        i=n*x;
        printf("\n");
    }
    x=n-2;
    for(int i=n*(n-2)+1;i>=n;i++){
         for(int j=i;j<i+t;j++){
            printf("%d",j);
            if(j<i+(t-1)){
                printf("*");
            }
        }
        x=x-2;
        i=n*x;
        printf("\n");
    }














    // int matrix[3][3];
    // for(int i=0;i<3;i++){
        // for(int j=0;j<3;j++){
            // scanf("%d",&matrix[i][j]);
        // }
    // }
    //  for(int i=0;i<3;i++){
        // for(int j=0;j<3;j++){
            // printf("%d ",matrix[i][j]);
        // }
        // printf("\n");
    // }
    // for(int i=0;i<3;i++){
        // for(int j=i;j<3;j++){
            // if(i<j){
            // int temp=matrix[i][j];
            // matrix[i][j]=matrix[j][i];
            // matrix[j][i]=temp;  
            // }
            // 
        // }
    // }
    // for(int i=0;i<3;i++){
        // for(int j=0;j<3;j++){
            // printf("%d ",matrix[i][j]);
        // }
        // printf("\n");
    // }
}