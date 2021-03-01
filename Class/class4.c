/*                                        SET - II
Name        :  Amit Kumar    
  Section     : B
  Program      :Write a program to add two numbers without using arithmetic operations.
*/
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter first number :");
    scanf("%d",&n);
    printf("Enter second number :");
    scanf("%d",&m);
   
   while(m!=0){
       int carry= n & m;
       n = n ^ m;
       m = carry<<1;
   }
   printf("Addtion i%d",)
    return 0;
}


#include<stdio.h>
int main(){
    int n,m;
    printf("Enter first number :");
    scanf("%d",&n);
    printf("Enter second number :");
    scanf("%d",&m);

    int res= (n|m) & (~n| ~m); 
    printf("XOR of %d and %d is %d",n,m,res);
    printf("\n");
    return 0;
}































// #include<stdio.h>

// void recursive(int n,int a,int b){
//    if(n==2)return;
//    int c=a+b;
//    printf(" ,%d ",c);
   
//    recursive(n-1,b,c);
// }
// int main(){
//     int t;
//     printf("Enter number of test cases :");
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         printf("Enter a limit:");
//         scanf("%d",&n);
//         printf("0, 1 ");
        
//         recursive(n,0,1);
//         printf("\n");
//     }
// }


// int main(){
//     int t;
//     printf("Enter number of test cases :");
//     scanf("%d",&t);
//     while(t--){
//         int n,m;
//         printf("Enter a first number:");
//         scanf("%d",&n);
//         printf("Enter a second number:");
//         scanf("%d",&m);
//         int ans=recursive(n,m);
//         printf("GCD of %d and %d is %d  ",n,m,ans);
//         printf("\n\n");
//     }
// }


// int iterative(int n,int m){
//     int ans=0;
//     for(int i=1,j=1;i<=n&&j<=m;i++,j++){
//         if(n%i==0 && m%i==0){
//             ans=i;
//         }
//     }
// return ans;
// }

// int recursive(int a,int b){
//     if(b==0){
//         return a;
//     }else{
//         return recursive(b,a%b);
//     }
// }


// #include<stdio.h>
// int recursive(int n){
    // if(n==1){
        // return 1;
    // }else{
    //   return n * recursive(n-1);
    // }
// }
// int main(){
    // int t;
    // printf("Enter number of test cases :");
    // scanf("%d",&t);
    // while(t--){
        // int n;
        // printf("Enter a number :");
        // scanf("%d",&n);
    //    int f=recursive(n);
    // printf("Factorial of %d is %d  ",n,f);
    // printf("\n\n");
    // }
// }

// int iterative(int n){
    // int f=1;
    // for(int i=1;i<=n;i++){
        // f=f*i;
    // }
    // return f;
// }