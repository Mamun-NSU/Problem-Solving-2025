// Link: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n = nums.size(), ops = 0;

        for (int i = 0; i <= n - 3; i++)
        {
            if (nums[i] == 0)
            { // Flip the next 3 elements
                nums[i] ^= 1;
                nums[i + 1] ^= 1;
                nums[i + 2] ^= 1;
                ops++;
            }
        }

        // If there are any remaining 0s, it's impossible
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                return -1;
        }

        return ops;
    }
};
