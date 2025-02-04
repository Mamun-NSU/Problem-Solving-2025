// Link: https://leetcode.com/problems/maximum-ascending-subarray-sum/description/

class Solution
{
public:
    int maxAscendingSum(std::vector<int> &nums)
    {
        int maxSum = nums[0];  // Initialize max sum with the first element
        int currSum = nums[0]; // Start the current sum with the first element

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > nums[i - 1])
            {
                currSum += nums[i]; // Extend the ascending subarray
            }
            else
            {
                maxSum = std::max(maxSum, currSum); // Update max sum if needed
                currSum = nums[i];                  // Start a new subarray
            }
        }

        return std::max(maxSum, currSum); // Final check for the last subarray
    }
};
