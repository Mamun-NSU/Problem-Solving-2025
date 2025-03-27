// Link: https://leetcode.com/problems/minimum-index-of-a-valid-split/description/

class Solution
{
public:
    int minimumIndex(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int num : nums)
        {
            freq[num]++;
        }

        // Find the dominant element
        int dominant = -1, totalFreq = 0;
        for (auto &[key, value] : freq)
        {
            if (value * 2 > n)
            {
                dominant = key;
                totalFreq = value;
                break;
            }
        }

        if (dominant == -1)
            return -1; // No dominant element

        // Check valid split index
        int leftCount = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == dominant)
            {
                leftCount++;
            }
            int rightCount = totalFreq - leftCount;

            if (leftCount * 2 > (i + 1) && rightCount * 2 > (n - i - 1))
            {
                return i;
            }
        }

        return -1;
    }
};
