// Link: https://leetcode.com/problems/count-number-of-bad-pairs/description/

class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        unordered_map<int, long long> freq;
        long long n = nums.size();
        long long totalPairs = n * (n - 1) / 2;
        long long goodPairs = 0;

        for (int i = 0; i < n; i++)
        {
            int key = nums[i] - i;
            goodPairs += freq[key]; // Count all good pairs formed so far
            freq[key]++;            // Increment frequency for future occurrences
        }

        return totalPairs - goodPairs;
    }
};