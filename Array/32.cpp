#include <bits/stdc++.h>
using namespace std;

int main() {
	int test_cases;
	cin>>test_cases;
	while(test_cases--){
	    int m,n;
	    cin>>m>>n;
	    int a[m],b[n];
	    for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        unordered_map<int,int> map;
        
        for(int i=0;i<m;i++){
            map[a[i]] =1;
        }
        for(int i=0;i<n;i++){
            if(map[b[i]] ==1){
                continue;
            }
            else{
            cout<<"No";
            return 0;
                }        }
        cout<<"Yes";
	return 0;
	}
}