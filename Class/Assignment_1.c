/*Name:Sushil Rawat
Section:D
Roll no. 70
*/      
#include <stdio.h>
double fib(int n);
int main(){
     printf("Name - Sushil Rawat   sec - D\n ");
    int n;
    printf("Enter the number    ");
     scanf("%d",&n);
     printf("the nth term of fibonacci series %.0f ",fib(n));
    return 0;
}
double fib(int n){
    if(n==1)
    return 0;
    else if(n==3||n==2)
    return 1;
    else{
    double f=0,s=1,t=1;
    for(int i=4;i<=n;i++){
        f=s;    s=t;   t=f+s;
    }
    return t;
}
}



























// #include<stdio.h>
// #include<math.h>
// long double fib(int n) {
//     long double phi = (1 + sqrt(5)) / 2;
//     return round(pow(phi, n) / sqrt(5));
// }

// int main ()
// {
// int n = 50;
// printf("%.Lf", fib(n));
// return 0;
// }






