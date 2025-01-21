// Link: https://leetcode.com/problems/grid-game/description/

class Solution
{
public:
    long long gridGame(vector<vector<int>> &grid)
    {
        int n = grid[0].size();
        vector<long long> prefixTop(n + 1, 0), prefixBottom(n + 1, 0);

        // Calculate prefix sums for both rows
        for (int i = 0; i < n; ++i)
        {
            prefixTop[i + 1] = prefixTop[i] + grid[0][i];
            prefixBottom[i + 1] = prefixBottom[i] + grid[1][i];
        }

        long long result = LLONG_MAX;

        // Iterate through each column as the transition point
        for (int k = 0; k < n; ++k)
        {
            // Points collected by the second robot
            long long pointsTop = prefixTop[n] - prefixTop[k + 1]; // Remaining in top row
            long long pointsBottom = prefixBottom[k];              // Accumulated in bottom row

            // Max points the second robot can collect
            long long maxPoints = max(pointsTop, pointsBottom);

            // Minimize the maximum points collected by the second robot
            result = min(result, maxPoints);
        }

        return result;
    }
};
