// Link: https://leetcode.com/problems/shortest-common-supersequence/description/

class Solution
{
public:
    string shortestCommonSupersequence(string str1, string str2)
    {
        int m = str1.size(), n = str2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        // Compute the length of Longest Common Subsequence (LCS)
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (str1[i - 1] == str2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        // Construct the Shortest Common Supersequence (SCS)
        string result = "";
        int i = m, j = n;
        while (i > 0 && j > 0)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                result += str1[i - 1];
                i--, j--;
            }
            else if (dp[i - 1][j] > dp[i][j - 1])
            {
                result += str1[i - 1];
                i--;
            }
            else
            {
                result += str2[j - 1];
                j--;
            }
        }

        // Add remaining characters from str1 and str2
        while (i > 0)
        {
            result += str1[i - 1];
            i--;
        }
        while (j > 0)
        {
            result += str2[j - 1];
            j--;
        }

        // Reverse the result as we built it backwards
        reverse(result.begin(), result.end());
        return result;
    }
};
