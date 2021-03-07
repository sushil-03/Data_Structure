/*Name      : Sushil Rawat
  Section   : D
  Student Id: 20011665 */
#include<stdio.h>
void convert_Hexadecimal(int n){
    char str[1000];
    int i=0,t=n;
    while(n!=0){
        int mod=n%16;

        mod<10 ? str[i++]=mod+48 : str[i++]=mod+55;//using terniary operator
        n=n/16;
    }
    printf("Hexadecimal equivalent of %d is : ",t);
    for(int j=i-1;j>=0;j--){
        printf("%c",str[j]);
    }
    printf("\n");
}
void convert_Binary(int n){
    int mod,res=0,i=0,t=n,arr[1000];
    while(n>0){
        mod=n%2;
        arr[i++]=mod;
        n=n/2;
    }         
    printf("Binary equivalent of %d is : ",t);
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    printf("\n");
}
void convert_Octal(int  n){
    int arr[1000];
    int mod,res=0,i=0,t=n;
    while(n>0){
        mod=n%8;
        arr[i++]=mod;
        n=n/8;
    }
    printf("Octal equivalent of %d is : ",t);
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    printf("\n");
}
int main(){
    int test_cases;
    printf("Enter number of test cases :");
    scanf("%d",&test_cases);
    while(test_cases--){
        int n;
        printf("Enter the Decimal Number : ");
        scanf("%d",&n);
        printf("\n");
        convert_Hexadecimal(n);
        convert_Binary(n);
        convert_Octal(n);
        printf("\n");
    }
    return 0;
}