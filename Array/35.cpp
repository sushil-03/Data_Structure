#include <bits/stdc++.h>
using namespace std;

int main() {
	int test_cases;
	cin>>test_cases;
	long int n;cin>>n;
	long int arr[n];
	for(int i=0 ;i<n;i++) cin >>arr[i];
	int m,d;cin>>m;

	int res =0;
	sort(arr,arr+n);

	for(int i=0;m+i-1<n;i++){
	    d= arr[m-1+i] -arr[i];
	    res = min(res,d);
	}
	cout<<res;
	return 0;
}