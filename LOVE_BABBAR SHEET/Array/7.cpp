#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],max=INT32_MIN,min =INT32_MAX;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   for (int  i = 0; i < n; i++)
    {
       if(arr[i]>max){
           max=arr[i];
       } 
       if(arr[i]<min){
           min =arr[i];
       }
    }
    cout<<"MAximum element is "<<max<<" and Minimum is " << min <<endl;
    return 0;
}
    
    
   