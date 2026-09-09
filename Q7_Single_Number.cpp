//Problem statement: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.

// leetcode: https://leetcode.com/problems/single-number/description/

//XOr
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0;
        if(nums.size()==1){
            return nums[0];
        }
        else{
        for(int i = 0;i< nums.size();i++){
           val =  val^nums[i];
        }
        }
        return val;
        
    }
};