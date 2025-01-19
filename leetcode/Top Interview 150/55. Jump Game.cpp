// Link: https://leetcode.com/problems/jump-game/description/

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int reachable = 0; // Maximum index that can be reached so far

        for (int i = 0; i < n; ++i)
        {
            // If the current index is beyond the maximum reachable, return false
            if (i > reachable)
                return false;

            // Update the maximum reachable index
            reachable = max(reachable, i + nums[i]);

            // If the last index is reachable, return true
            if (reachable >= n - 1)
                return true;
        }

        return false; // If the loop completes without reaching the last index
    }
};