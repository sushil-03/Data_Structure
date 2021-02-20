/*Name        : Sushil Rawat    
  Roll number : 70
  Section     : D
  Program      :Write a program to print GCD of two numbers using recursion.
*/

#include<stdio.h>
int  gcd(int n,int m){
    if(m==0)
    return n;
    else{
        return gcd(m,n%m);
    }
}
int main(){
    int n,m;
    printf("Enter two number :");
    scanf("%d%d",&n,&m);
    int res=gcd(n,m);
    printf("GCD of %d and %d is %d\n",n,m,res);
    return 0;
}



















// #include<stdio.h>
// 
// long sum(int n){
    // if(n==1){
        // return 1;
    // }
    // return  (n*n+sum(n-1));
// }
// int main(){
    // int n;
    // printf("Enter a number :\n");
    // scanf("%d",&n);
    // long res= sum(n);
    // printf("Total sum of this series is  %ld\n",res);
    // return 0;
// }
// 


// #include<stdio.h>
// int  sum(int n){
//     if(n==1)
//     return 1;

//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int res =sum(n);
//     printf("Total sum is %d\n",res);
//     return 0;
// }



// #include<stdio.h>
// int fib(int n){
//     if(n==1|| n==0.)
//     return n;
//     else
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     printf("Enter a value :\n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     printf(" %d ",fib(i));
//     return 0;
// }




// #include<stdio.h>
// long long fact(int n){
    // if(n==1)
    // return 1;
    // else
    // return  n * fact(n-1);
// }
// int main(){
    // int n;
    // printf("Enter a number :\n");
    // scanf("%d",&n);
    // long long res =fact(n); 
    // printf("%lld",res);
    // return 0;
// }