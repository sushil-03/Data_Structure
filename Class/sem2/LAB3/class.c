// Develop a program to find the biggest element of a given matrix of order M x N accepted from the user.
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     printf("Name : Sushil Rawat  Sec :D\n");
//     int r,c;
//     printf("\nEnter row and column of first matrix\n");
//     scanf("%d%d",&r,&c);
//     int matrix[r][c];
//     int large=INT_MIN;
//     printf("Enter element of first matrix :\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("Enter value of a[%d][%d]  :",i,j);
//             scanf("%d",&matrix[i][j]);
//             if(matrix[i][j]>large){
//                 large=matrix[i][j];
//             }
//         }
//     }
//     printf("\n%d is the biggest element of the matrix\n",large);
//     return 0;
// }









































// Develop a program to find product of two matrices of order M x N and P x Q accepted from the user.
// #include<stdio.h>
// int main(){
//     printf("Name : Sushil Rawat  Sec :D\n");
//     int r1,c1,r2,c2;
//     printf("\nEnter row and column of first matrix\n");
//     scanf("%d%d",&r1,&c1);
//     int matrix1[r1][c1];
//     printf("Enter element of first matrix :\n");
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             printf("Enter value of a[%d][%d]  :",i,j);
//             scanf("%d",&matrix1[i][j]);
//         }
//     }
//     printf("\nEnter row and column of second matrix\n");
//     scanf("%d%d",&r2,&c2);
//     int matrix2[r2][c2];
//     printf("Enter element of second matrix :\n");
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             printf("Enter value of a[%d][%d]  :",i,j);
//             scanf("%d",&matrix2[i][j]);
//         }
//     }
//     int res[r1][c2];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//            res[i][j] =0;
//             for(int k=0;k<r1;k++)
//             res[i][j] +=matrix1[i][k]* matrix2[k][j];
//         }
//     }
//     printf("Product of two matrices :\n");
//      for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++)
//         printf("%d ",res[i][j]);
//         printf("\n");
//     }
// }





// Develop a program test whether a given matrix of order MxN is an upper - triangular matrix or not
// #include<stdio.h>
// int main(){
//     printf("Name : Sushil Rawat  Sec :D\n");
//     int r,c;
//     printf("\nEnter row and column\n");
//     scanf("%d%d",&r,&c);
//     int matrix[r][c];
//     printf("Enter element of matrix :\n");
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             printf("Enter value of a[%d][%d]  :",i,j);
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     int f=1;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//            if(i>j && matrix[i][j]!=0 ){
//                 f=0;
//                 break;
//            }
//         }
//     }
//     if(f==1)printf("\nMatrix is upper triangular matrix\n");
//     else printf("\nMatrix  is not upper triangular matrix\n");

//     return 0;
// }    




// Develop a program to find the sum of diagonal elements of a matrix of order MxN accepted from the user.

// #include<stdio.h>
// int main(){
//     printf("Name : Sushil Rawat  Sec :D\n");
//     int r,c;
//     printf("\nEnter row and column\n");
//     scanf("%d%d",&r,&c);
//     int matrix[r][c];
//     printf("Enter element of matrix :\n");

//     int principalDiagnol=0;
//     int secondaryDiagnol=0;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             printf("Enter value of a[%d][%d]  :",i,j);
//             scanf("%d",&matrix[i][j]);

//             if(i==j)
//             principalDiagnol+=matrix[i][j];

//             if(j==c-i+1)
//             secondaryDiagnol+=matrix[i][j];
//         }
//     }

//     printf("\nSum of Principal Diagonal :%d",principalDiagnol);    
//     printf("\nSum of Secondary Diagonal :%d\n",secondaryDiagnol);    

// }







// // Develop a program to print transpose of a matrix of order M x N accepted from the user.
// #include<stdio.h>
// int main(){
//     printf("Name : Sushil Rawat  Sec :D\n");
//     int r,c;
//     printf("\nEnter row and column\n");
//     scanf("%d%d",&r,&c);
//     int matrix[r][c];
//     printf("Enter element of matrix :\n");
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             printf("Enter value of a[%d][%d]  :",i,j);
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     for(int i=1;i<=r;i++){
//         for(int j=i;j<=c;j++){
//             int temp= matrix[i][j];
//             matrix[i][j]=matrix[j][i];
//             matrix[j][i]=temp;
//         }
//     }
//     printf("\n");
//     printf("Transpose of Matrix :\n");
//       for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++)
//         printf("%d ",matrix[i][j]);
//         printf("\n");
//     }
// }