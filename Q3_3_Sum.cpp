// problem satement: Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

//Notice that the solution set must not contain duplicate triplets.

 //leetcode: https://leetcode.com/problems/3sum/description/

 class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());  // sort the array first
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int mid;

        while(i < j) {
            mid = i + 1;
            while(mid < j) {
                int sum = nums[i] + nums[mid] + nums[j];
                if(sum < 0) {
                    mid++;
                }
                else if(sum > 0) {
                    j--;
                }
                else { // sum == 0
                    res.push_back({nums[i], nums[mid], nums[j]});
                    // skip duplicates for mid
                    while(mid < j && nums[mid] == nums[mid + 1]) mid++;
                    mid++;
                }
            }
            // skip duplicates for i
            while(i < j && nums[i] == nums[i + 1]) i++;
            i++;
            mid = i + 1; // reset mid after moving i
            j = n - 1;   // optionally reset j to end if you want full scan each i
        }

        return res;
    }
};
