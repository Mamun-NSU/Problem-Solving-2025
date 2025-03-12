// Link: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/

class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int n = nums.size();

        // Find the first index of a positive number
        int posIndex = lower_bound(nums.begin(), nums.end(), 1) - nums.begin();

        // Find the first index where 0 or a positive number appears
        int negIndex = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();

        int pos = n - posIndex; // Count of positive numbers
        int neg = negIndex;     // Count of negative numbers

        return max(pos, neg);
    }
};