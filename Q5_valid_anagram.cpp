// problrm statement: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
//leetcode: https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int freq[26] = {0};
        int freq2[26] = {0};
        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:t){
            freq2[c-'a']++;
        }
        for(int i = 0; i < 26; i++){
    if(freq[i] != freq2[i]){
        return false;
    }
}
return true;

    }
};