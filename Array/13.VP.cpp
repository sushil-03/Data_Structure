#include<iostream>
#include<climits>
using namespace std;
void subArray(int arr[],int n){
    int sum=0;
    int maxSum = INT32_MIN;
    for(int i=0;i<n;i++){//start
        for (int j = i; j < n; j++){//end
            for (int  k = i; k <= j; k++)
            {
              sum+=arr[k];
            } 
            maxSum=max(sum,maxSum);
            sum=0;
        }
    }
cout<<maxSum;
}
int main()
{
    int arr[]={-1,-2,-3,-4};
    subArray(arr,5);
    
    return 0;
}    