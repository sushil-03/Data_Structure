/*Name      : Sushil Rawat
  Section   : D
  Student Id: 20011665 
*/
#include<stdio.h>
int main(){
    int test_cases;
    printf("Enter number of test cases :\n");
    scanf("%d",&test_cases);
    while(test_cases--){
        int p,l,b,t;
        printf("Enter the number of rounds :\n");
        scanf("%d",&p);
        printf("Enter length and breadth :\n");
        scanf("%d%d",&l,&b);
        printf("Enter the cost of fencing :\n");
        scanf("%d",&t);
        int tot_wire=2*(l+b)*p;
        int tot_cost=tot_wire* t;
        printf("Total wire to be purchase is : %d\n",tot_wire);
        printf("Total cost of Fencing is : %d\n",tot_cost);
        printf("\n");
    }
    return 0;
}  