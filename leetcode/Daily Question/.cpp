// Link: https://leetcode.com/problems/find-missing-and-repeated-values/description/

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int N = n * n;
        vector<int> freq(N + 1, 0);
        int a = -1, b = -1;

        // Count occurrences of each number
        for (const auto &row : grid)
        {
            for (int num : row)
            {
                freq[num]++;
            }
        }

        // Identify the missing and repeating numbers
        for (int i = 1; i <= N; i++)
        {
            if (freq[i] == 2)
                a = i; // Repeated number
            if (freq[i] == 0)
                b = i; // Missing number
        }

        return {a, b};
    }
};