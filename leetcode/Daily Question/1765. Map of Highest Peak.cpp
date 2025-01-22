// LinK: https://leetcode.com/problems/map-of-highest-peak/description/

#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {
        int m = isWater.size();
        int n = isWater[0].size();
        vector<vector<int>> height(m, vector<int>(n, -1)); // Initialize height matrix
        queue<pair<int, int>> q;                           // BFS queue

        // Initialize the queue with water cells
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (isWater[i][j] == 1)
                {
                    height[i][j] = 0; // Water cells have height 0
                    q.push({i, j});
                }
            }
        }

        // Directions for moving in 4 directions (N, S, E, W)
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        // BFS to calculate the height for land cells
        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();

            for (auto [dx, dy] : directions)
            {
                int nx = x + dx;
                int ny = y + dy;

                // Check if the neighbor is within bounds and unprocessed
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && height[nx][ny] == -1)
                {
                    height[nx][ny] = height[x][y] + 1; // Set height
                    q.push({nx, ny});                  // Add to the queue
                }
            }
        }

        return height;
    }
};
