// Develop a program to print transpose of a matrix of order M x N accepted from the user.
#include<stdio.h>
int main(){
    printf("Name : Amit Kumar  Sec :B\n");
    int r,c;
    printf("\nEnter row and column\n");
    scanf("%d%d",&r,&c);
    int matrix[r][c];
    printf("Enter element of matrix :\n");
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            printf("Enter value of a[%d][%d]  :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=i;j<=c;j++){
            int temp= matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    printf("\n");
    printf("Transpose of Matrix :\n");
      for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)
        printf("%d ",matrix[i][j]);
        printf("\n");
    }
}

