// Problem Statement: You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

//Return the length of the longest substring containing the same letter you can get after performing the above operations.
 //leetcode link: https://leetcode.com/problems/longest-repeating-character-replacement/description/

 class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> seen;
        int i,j,best=0,Max;
        i=0,j=0;
        while(j<s.size()){
            seen[s[j]]++;
            Max=0;
            for(auto& p:seen)Max=max(Max,p.second);
            while(j-i+1-Max>k){
                seen[s[i]]--;
                if(seen[s[i]]==0)seen.erase(seen[s[i]]);
                i++;
            }
            best=max(best,j-i+1);
            j++;
        
        }
        return best;
    }
};