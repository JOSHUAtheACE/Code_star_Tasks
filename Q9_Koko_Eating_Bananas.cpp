//Problem statement: Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
//leetcode: https://leetcode.com/problems/koko-eating-bananas/submissions/2136674545/




class Solution {
public:

    bool canFinish(vector<int>& piles, int h, int speed) {

        long long hours = 0;

        for (int bananas : piles) {
            hours += (bananas + speed - 1) / speed;

            if (hours > h)
                return false;
        }

        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (canFinish(piles, h, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};