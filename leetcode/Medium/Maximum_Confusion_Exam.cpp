#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
A teacher is writing a test with n true/false questions, with 'T' denoting true and 'F' denoting false. He wants to confuse the students by maximizing the number of consecutive questions with the same answer (multiple trues or multiple falses in a row).

You are given a string answerKey, where answerKey[i] is the original answer to the ith question. In addition, you are given an integer k, the maximum number of times you may perform the following operation:

Change the answer key for any question to 'T' or 'F' (i.e., set answerKey[i] to 'T' or 'F').
Return the maximum number of consecutive 'T's or 'F's in the answer key after performing the operation at most k times.

Input: answerKey = "TFFT", k = 1
Output: 3
Explanation: We can replace the first 'T' with an 'F' to make answerKey = "FFFT".


*/
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int left=0,cnt=0,ans=0;
        //Checking for all true
        for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]=='F'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[left]=='F')
                    cnt--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        //Checking for all false
        cnt=0,left=0;
        for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]=='T'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[left]=='T')
                    cnt--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
       return ans;
    }


int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif



}