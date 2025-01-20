// Link: https://leetcode.com/problems/first-completely-painted-row-or-column/description/

class Solution
{
public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size();

        // Map to store the position of each number in the matrix
        unordered_map<int, pair<int, int>> pos;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                pos[mat[i][j]] = {i, j};
            }
        }

        // Frequency arrays for rows and columns
        vector<int> rowCount(m, 0), colCount(n, 0);

        for (int i = 0; i < arr.size(); ++i)
        {
            // Get the position of the current number in the matrix
            auto [r, c] = pos[arr[i]];

            // Increment the count for the corresponding row and column
            rowCount[r]++;
            colCount[c]++;

            // Check if any row or column is fully painted
            if (rowCount[r] == n || colCount[c] == m)
            {
                return i;
            }
        }

        return -1; // This should never be reached given the constraints
    }
};
