/*
Given an integer array nums, return the number of triplets chosen from the array that can make triangles if 
we take them as side lengths of a triangle.

Input: nums = [2,2,3,4]
Output: 3
Explanation: Valid combinations are: 
2,3,4 (using the first 2)
2,3,4 (using the second 2)
2,2,3

 */
#include<bits/stdc++.h>
using namespace std;
int countPalindromicSubsequence(string s) {
        vector<pair<int,int>>v(26,{-1,-1});

        int n = s.length();
        for(int i=0;i<n;i++){
            if(v[s[i]-'a'].first == -1)   
                v[s[i]-'a'].first=i;
               else
               v[s[i]-'a'].second = i ;
        }
        int ans=0;
        for(int i=0;i<26;i++){
             if(v[i].second != -1){
                
                unordered_set<char>se;
                for(int j=v[i].first+1;j<v[i].second;j++)se.insert(s[j]);
                ans += ((int)se.size());
            }
        }
        return ans;
}
int main(){

    string s ="aabca";
    cout << countPalindromicSubsequence(s);
}


