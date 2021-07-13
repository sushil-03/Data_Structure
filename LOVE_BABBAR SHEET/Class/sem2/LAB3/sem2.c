#include<stdio.h>
#define max 500
int occurence(char s1[]){
    int i=0;
    while(s1[i]!='\n'){
        if(s1[i]>=65 && s1[i]<=90 || s1[i]>=97 && s1[i]<=122)
        printf("%c",s1[i]);
        else
        printf(" ");

        i++;
    }
    return 0;
}
int main(){
    printf("Name :Sushil Rawat Sec :D\n\n");
    printf("Enter a string  :");   
    char s1[max];
    fgets(s1,max,stdin);
    occurence(s1);
    
    return 0;


}

















// #include<stdio.h>
// int main(){
//     printf("Name :Sushil Rawat Sec :D\n\n");
//     printf("Enter a string string :");   
//     char s1[100];
    // fgets(s1,100,stdin);
    
//     int n,m;
//     printf("Enter the value of character :");
//     scanf("%d",&m);
//     printf("Enter the starting position :");
//     scanf("%d",&n);

//     int i=0,count=0;
//     while(s1[i]!='\0'){
//        count++;
//         i++;
//     }
//     for(int j=0;j<m;j++){
//         s1[n]='$';
//         n++;
//     }
//     for(int j=0;j<count;j++){
//         if(s1[j]!='$')
//         printf("%c",s1[j]);
//     }
//     return 0;
// }








// #include<stdio.h>
// #include<string.h>
// int main(){
//     printf("Name :Sushil Rawat Sec :D\n\n");
//     printf("Enter a string string :");   
//     char s1[100];
//     fgets(s1,100,stdin);
//     int i=0;
//     while(s1[i]!='\0'){
//         char x = s1[i];
//         int j=i+1,count=1;

//         while(s1[j]!='\0'){
//             if(s1[j]==x){
//                 count++;
//                 s1[j]='$';
//             }
//             j++;
//         }
//         if(x>=65 && x<=90 || x>=97 && x<=122){
//             printf("\n %c - %d",s1[i],count);
//         }
//         i++;
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int compare(char s1[100],char s2[100]){
//      int i=0,flag=0;
//     while(s1[i]!='\0'){
//         if(s1[i]!=s2[i]){
//             flag=1;
//             break;
//         }
//     }
//     return flag;
// }
// int main(){
//     printf("Name :Sushil Rawat Sec :D\n\n");
//     printf("Enter two string :");   
//     char s1[100],s2[100];
//     fgets(s1,100,stdin);
//     fgets(s2,100,stdin);
//     int flag=compare(s1,s2);
//     if(flag)
//         printf("\nStrings are not equal.\n");
//     else
//         printf("\nStrings are  equal.\n");
//    return 0;
// }