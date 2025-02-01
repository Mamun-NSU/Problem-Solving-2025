// Link: https://leetcode.com/problems/special-array-i/description/

class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        // Traverse the array and check adjacent elements
        for (int i = 1; i < nums.size(); i++)
        {
            if ((nums[i] % 2) == (nums[i - 1] % 2))
            {
                return false; // If two adjacent elements have the same parity, return false
            }
        }
        return true; // If no violations are found, return true
    }
};
