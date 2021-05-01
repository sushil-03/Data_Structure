//Name= Shobhit Jethuri, Section=A, Student-id-20011012
//Develop a program to convert a number from base 10 to base 16.

#include <stdio.h>
int main()
{
  printf("Shobhit Jethuri Sec='A'\n");
  char hex[50];
  int num,i=0, j, rem;
  printf("enter the number :");
  scanf("%d",&num);
  while(num>0)
  {  
  rem=num%16;
  if(rem<10)
      {
    hex[i++]=48+rem;
    }  
 else 
    {
    hex[i++]=55+rem;
      }
    num/=16;
     }
     printf("hexadecimal is :");
  for(j=i-1; j>=0; j--){
    printf("%c",hex[j]);
  }
  printf("\n");
}