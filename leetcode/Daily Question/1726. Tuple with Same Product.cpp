// Link: https://leetcode.com/problems/tuple-with-same-product/description/

class Solution
{
public:
    int tupleSameProduct(vector<int> &nums)
    {
        unordered_map<int, int> productCount;
        int n = nums.size();
        int result = 0;

        // Count occurrences of products
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int product = nums[i] * nums[j];
                productCount[product]++;
            }
        }

        // Calculate the number of valid tuples
        for (const auto &[product, count] : productCount)
        {
            if (count > 1)
            {
                result += (count * (count - 1) / 2) * 8;
            }
        }

        return result;
    }
};
