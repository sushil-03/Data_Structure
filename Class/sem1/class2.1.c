/*Name :Amit kumar
  Roll number :11
  Program :Write a menu driven program to perform following operations using functions */  
#include<stdio.h> 
void Area_of_circle(){
    int r;
    printf("Enter radius of circle :\n");
    scanf("%d",&r);
    float res= 3.14 *r *r;
    printf("Area of circle of radius %d is  %.3f\n",r,res);
}
void Area_of_rectangle(){
    int l,b;
    printf("Enter length and breadth :\n");
    scanf("%d%d",&l,&b);
    int res =l*b;
    printf("Area of rectangle is %d\n",res);
}
void checking(){
    int n; 
    printf("Enter a number :\n");
    scanf("%d",&n);
    (n%2==0)?printf("Given number is even \n") :printf("Given number is odd \n");
}
void printing(){
    int n;
    printf("Enter a limit :");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}
int main(){
    int n; 
    printf("Enter 1 for Area of circle :\n");
    printf("Enter 2 for Area of rectange :\n");
    printf("Enter 3 for checking even or odd:\n");
    printf("Enter 4 for printing Fibonacci Series:\n");
    printf("Enter your choice :");
    scanf("%d",&n);
    switch(n){
        case 1:
            Area_of_circle();
            break;
        case 2:
            Area_of_rectangle();
            break;
        case 3:
            checking();
            break;
        case 4:
            printing();
            break;
        default:
        printf("Invalid Input :\n");
    }
    return 0;
}