// problem statement: Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.
// leetcode : https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int i,j;
        unordered_map<char,int> seen;
        unordered_map<char,int> freq;
        for(char c: p)seen[c]++;
        i=0;
        j=0;
        while(j<s.size()){
            freq[s[j]]++;
            while((j-i+1)>p.size()){
                freq[s[i]]--;
                if(freq[s[i]]==0)freq.erase(s[i]);
                i++;
            }
            if(freq==seen)ans.push_back(i);
            j++;
            
        }
        return ans;
    }
};