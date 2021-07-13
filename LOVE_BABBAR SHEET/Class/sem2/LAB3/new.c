#include <stdio.h>
int main(){
    int x=5,y=2,z=3;
     int *n=&x;
    printf("Sushil Rawat     sec- D \n\n");
    printf("Address stored in Pointer n = %lu\n",(unsigned long) n); 
        n++;
     printf(" n++ of Pointer n  =%lu\n",(unsigned long) n); 
        n--;
     printf(" n-- of Pointer n  =   %lu\n",(unsigned long) n); 
        n=n+y;
     printf("add n+ y(%d) TO Pointer n = %lu\n", y,(unsigned long) n); 
        n=n-z;
     printf("sub n- z(%d) from Pointer n = %lu\n", z,(unsigned long) n); 
    char ch='A';
     char *a=&ch; 
  printf("\n\n" ); 
 
     printf("Address in char Pointer a =  %lu\n",(unsigned long) a); 
        a++;     
    printf("a++ char Pointer a         =  %lu\n",(unsigned long) a); 
        a--;    
    printf("a-- char Pointer a         =  %lu\n", (unsigned long) a); 
        a=a+y;  
     printf("add a+y(%d) char Pntr a   =  %lu\n", y, (unsigned long) a); 
        a=a-z;     
     printf("sub a-z(%d) char Pntr a   =  %lu\n", z, (unsigned long) a); 
     
    return 0;
}
