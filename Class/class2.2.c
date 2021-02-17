/*Name :Amit Kumar
  Roll number :11
  Program :Write a user defined function to check a number is perfect or not.*/  
#include<stdio.h>
#include<stdbool.h>
bool check_perfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum +=i;
        }
    }
    if(sum==n);
    return true;
    else
    return false;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(check_perfect(n)){
        printf("%d is the perfect number \n",n);
    }
    else
    printf("%d is not a perfect number \n",n);
    return 0;
}