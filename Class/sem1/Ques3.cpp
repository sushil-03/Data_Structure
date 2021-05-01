/*Name      : Sushil Rawat
  Section   : D
  Student Id: 20011665 */
#include<stdio.h>
void check_condition(int n){
    n%2==0?printf("The number (%d) even(using ternary operator)",n):
    printf("The number (%d) odd(using ternary operator)",n);
}
void check_switch(int n){

    switch(n%2){
        case 0: printf("The number (%d) even(using switch case)",n);
        break;
        case 1: printf("The number (%d) odd(using switch case)",n);
        break;
    }    
}
int main(){
    int test_cases;
    printf("Enter number of test_cases :");
    scanf("%d",&test_cases);
    while(test_cases--){
        int n;
        printf("Enter a number :");
        scanf("%d",&n);
        check_switch(n);
        printf("\n");
        check_condition(n);
        printf("\n\n")
    }
} 