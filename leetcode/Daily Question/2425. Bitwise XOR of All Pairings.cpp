// Link: https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/

class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        int xor1 = 0, xor2 = 0;

        // XOR all elements in nums1
        for (int num : nums1)
            xor1 ^= num;

        // XOR all elements in nums2
        for (int num : nums2)
            xor2 ^= num;

        // Apply the simple logic
        if (nums2.size() % 2 == 0)
            xor1 = 0; // Even times cancels out
        if (nums1.size() % 2 == 0)
            xor2 = 0; // Even times cancels out

        return xor1 ^ xor2;
    }
};