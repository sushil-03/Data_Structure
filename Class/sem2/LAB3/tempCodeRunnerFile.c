#include<stdio.h>
int main(){
    printf("Name : Sushil Rawat  Sec :D\n");
    int r1,c1,r2,c2;
    printf("\nEnter row and column of first matrix\n");
    scanf("%d%d",&r1,&c1);
    int matrix1[r1][c1];
    printf("Enter element of first matrix :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("Enter value of a[%d][%d]  :",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nEnter row and column of second matrix\n");
    scanf("%d%d",&r2,&c2);
    int matrix2[r2][c2];
    printf("Enter element of second matrix :\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("Enter value of a[%d][%d]  :",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           res[i][j] =0;
            for(int k=0;k<r1;k++)
            res[i][j] +=matrix1[i][k]* matrix2[k][j];
        }
    }
    printf("Product of two matrices :\n");
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
        printf("%d ",res[i][j]);
        printf("\n");
    }
}