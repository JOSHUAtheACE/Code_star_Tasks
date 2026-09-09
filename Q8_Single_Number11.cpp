//problem statement: Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

//You must implement a solution with a linear runtime complexity and use only constant extra space.
// letecode: https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto& p:freq){
            if(p.second==1) return p.first;
        }
        return 0;
    }
};