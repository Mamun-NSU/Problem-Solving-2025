// Link : https: // leetcode.com/problems/majority-element/description/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        int n = nums.size();

        for (int num : nums)
        {
            freq[num]++;
            if (freq[num] > n / 2)
            {
                return num;
            }
        }

        return -1; // This line is never reached due to the problem's constraints.
    }
};
