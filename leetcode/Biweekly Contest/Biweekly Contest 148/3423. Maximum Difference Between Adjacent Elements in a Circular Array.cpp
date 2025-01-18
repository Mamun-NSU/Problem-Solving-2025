// Link: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/description/

class Solution
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
        int n = nums.size();
        int max_diff = 0;

        // Iterate through the array to find the maximum absolute difference
        for (int i = 0; i < n; ++i)
        {
            // Calculate the absolute difference between adjacent elements
            int diff = std::abs(nums[i] - nums[(i + 1) % n]);
            // Update the maximum difference
            max_diff = std::max(max_diff, diff);
        }

        return max_diff;
    }
};