// Find their mean and standard deviation using pointers and display the same to the output screen.
#include <stdio.h>
#include<math.h>
void calculation_aray(int *x,int n){
    float mean=0.0,sum=0.0,sd;
    for(int i=0;i<n;i++){
      mean=mean+x[i];
    }
    mean=mean/n;
    for(int i=0;i<n;i++){
        sum=sum+((x[i]-mean)*(x[i]-mean));
    }
    sd=sqrt(sum/n);
    printf("Mean: %f \nStandard Deviation: %f",mean,sd);
}

int main()
{
    int n;
    printf("Sushil Rawat     sec- D \n");
    printf("Number of Elements into Array \n");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d Elements into the Array \n", n);
    for (int i = 0 ; i < n ; i++)
    scanf("%d", &a[i]);

    calculation_aray(a, n);
    return 0;
}
