// Link: https://leetcode.com/problems/longest-common-prefix/description/

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return ""; // Edge case: empty array

        string prefix = ""; // Initialize prefix
        int n = strs.size();
        int minLength = INT_MAX;

        // Find the shortest string length
        for (const string &str : strs)
        {
            minLength = min(minLength, (int)str.size());
        }

        // Compare characters at each index
        for (int i = 0; i < minLength; ++i)
        {
            char currentChar = strs[0][i];
            for (int j = 1; j < n; ++j)
            {
                if (strs[j][i] != currentChar)
                {
                    return prefix; // Mismatch found
                }
            }
            prefix += currentChar; // Append to prefix
        }

        return prefix; // Return the longest common prefix
    }
};
