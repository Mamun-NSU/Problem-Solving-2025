// Link: https://leetcode.com/problems/count-servers-that-communicate/description/

class Solution
{
public:
    int countServers(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        vector<int> rowCount(m, 0), colCount(n, 0);

        // Count the number of servers in each row and column
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1)
                {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        int count = 0;
        // Count the servers that can communicate
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1 && (rowCount[i] > 1 || colCount[j] > 1))
                {
                    count++;
                }
            }
        }

        return count;
    }
};
