/*Name :Amit Kumar
  Roll number :11
  Program :Write a user defined function to check is a number is Palindrome or not*/ 
#include<stdio.h>
#include<stdbool.h>

bool check_palindrome(int n){
    int mod,k=0,temp;
    temp=n;
    while(n>0){
        mod = n%10;
        k=k*10+mod;
        n=n/10;
    }
    if(k==temp)
    return true;
    else
    return false;
}
int main(){
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);

    if(check_palindrome(n)){
        printf("%d is a Palindrome number. \n",n);
    }
    else
    printf("%d is not a Palindrome number, \n",n);

    return 0;
}











// #include<stdio.h>
// int gcd(int a ,int b){
//     int gcd;
//     for(int i=1;i<=a,i<=b;i++){
//         if(a%i==0 && b%i==0)
//         gcd=i;
//     }
//     return gcd;
// }
// int lcm(int a,int b){
//     int lcm = a*b/(gcd(a,b));
//     return lcm;
// }
// int main(){
//     int a,b;
//     printf("Enter a two number :");
//     scanf("%d%d",&a,&b);
//     int res1 =gcd(a,b);
//     printf("GCD of %d and %d is %d\n",a,b,res1);

//     int res2=lcm(a,b);
//     printf("LCM of %d and %d is %d\n",a,b,res2);

//     return 0;
// }

















