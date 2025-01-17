// Link: https://leetcode.com/problems/neighboring-bitwise-xor/description/

class Solution
{
public:
    bool doesValidArrayExist(vector<int> &derived)
    {
        int xorSum = 0;
        for (int num : derived)
        {
            xorSum ^= num;
        }
        return xorSum == 0;
    }
};