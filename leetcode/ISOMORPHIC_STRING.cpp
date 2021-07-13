/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n!=m)
            return false;
        
    unordered_map<char,char>m1;
    unordered_map<char,char>m2;
int i=0;
        while(n>0 and m>0){
            if(m1.count(s[i])!=m2.count(t[i]))//both the element are present
                return false;
            if( m1.count(s[i])){//second or more
                if(m1[s[i]]!=t[i] && m2[t[i]]!=s[i])
                    return false;
                }else{//first time of particular element 
                m1.insert({s[i],t[i]});
                m2.insert({t[i],s[i]});
            }
            n--;
            m--;
            i++;
            
        }
          
        return true;
    }
};
