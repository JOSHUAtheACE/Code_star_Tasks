 // Problem statement: Given a string s, find the length of the longest substring without duplicate characters.

 // https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

 //soln:
 class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, best = 0;
        unordered_map<char,int> seen;

        while(j < s.size()){
            seen[s[j]]++;

            while(seen[s[j]] > 1){
                seen[s[i]]--;
                i++;
            }

            best = max(best, (j - i + 1));
            j++;
        }

        return best;
    }
};