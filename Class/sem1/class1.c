/*
Name : Sushil Rawat 
Section : D
Roll number : 70
Program :calculate the value of nCr
*/
#include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f =f*i;
    }
    return f;
}
int main(){
    int n,r;
    printf("Enter two number :");
    scanf("%d%d",&n,&r);
    int d =n-r;
    
    float result =(float)fact(n)/(fact(r)*fact(d));

    printf("%.3f",result);
    return 0;
}

























































// 4
// #include<stdio.h>
// int fact(int n){
//     int f=1;
//     for(int i =1;i<=n;i++){
//         f = f*i;
//     }
//     return f;
// }
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     float sum=0;
//     for(int i=1;i<=n;i++){
//         sum += (float)i/fact(i);
//     }
//     printf("%.3f",sum);
//     return 0;
// }



// 3
// #include<stdio.h>
// void factor(int i,int n){
//     if(n%i==0){
//         printf(" %d ",i);
//     }
// } 
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//     factor(i,n);
//     }
//     return 0;
// }

// 2
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int sum=0;
//     int sign =1;
//     for(int i=1;i<=n;i++){
//         sum += i*i*sign;
//         sign = sign * -1;
//     }
//     printf("%d",sum);
//     return 0;
// }

// 1
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             sum +=j;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }