// Find All four sum  numbers
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > Solve(vector<int>& arr,int target){
    vector<vector<int > > ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int Rem=target-arr[i]-arr[j];
            int left=j+1;
            int right=n-1;
            while(left<right){
                int sum =arr[left]+arr[right];
                if(sum<Rem)
                left++;
                else if(sum>Rem)
                right--;
                else{
                    vector<int>quad(4,0);
                    quad[0]=arr[i];
                    quad[1]=arr[j];
                    quad[2]=arr[left];
                    quad[3]=arr[right];
                    ans.push_back(quad);

                while(left<right  && arr[left]==quad[2]) left++;
                while(left<right && arr[right]==quad[3]) right--;
                }

            }
            while(j+1<n && arr[j+1]==arr[j]) j++;
            while(i+1<n && arr[i+1]==arr[i]) i++;
        }
    }
    return ans;
}
// using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<vector<int> > ans = Solve(arr,target);
    for(auto &v:ans){
        for(int &u :v)
        cout<<u<<" ";
        cout<<"$";
    }
    if(ans.empty())
    return -1;
    cout<<endl;
    return 0;
}
