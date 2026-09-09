// Problem Statement: You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

//Return the length of the longest substring containing the same letter you can get after performing the above operations.
 //leetcode link: https://leetcode.com/problems/longest-repeating-character-replacement/description/

 class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.empty()) return 0;
        int i=0, j=0, count=k, best=0;  
        while(j < s.size()) {
            if(s[j] == s[i]) {
                j++;
            } else {
                count--;
                if(count < 0) {
                    i = j;
                    count = k;
                }
                j++;
            }
            best = max(best, j - i);  
        }
        return best;
    }
};

 