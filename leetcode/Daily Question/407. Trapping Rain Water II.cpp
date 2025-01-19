// Link: https://leetcode.com/problems/trapping-rain-water-ii/description/

class Solution
{
public:
    int trapRainWater(vector<vector<int>> &heightMap)
    {
        int m = heightMap.size(), n = heightMap[0].size();
        if (m <= 2 || n <= 2)
            return 0; // Not enough space to trap water

        // Priority queue to store boundary cells (min-heap by height)
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;

        // Visited matrix
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        // Add all boundary cells to the heap and mark them visited
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                {
                    pq.push({heightMap[i][j], {i, j}});
                    visited[i][j] = true;
                }
            }
        }

        // Directions to move up, down, left, and right
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        int water = 0;
        int maxBoundary = 0;

        // Process cells in the priority queue
        while (!pq.empty())
        {
            auto [height, cell] = pq.top();
            pq.pop();

            int x = cell.first, y = cell.second;
            maxBoundary = max(maxBoundary, height);

            // Check all neighbors
            for (auto [dx, dy] : directions)
            {
                int nx = x + dx, ny = y + dy;

                // If the neighbor is within bounds and not visited
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny])
                {
                    visited[nx][ny] = true;

                    // If the neighbor is lower, it can trap water
                    if (heightMap[nx][ny] < maxBoundary)
                    {
                        water += maxBoundary - heightMap[nx][ny];
                    }

                    // Add the neighbor to the queue
                    pq.push({heightMap[nx][ny], {nx, ny}});
                }
            }
        }

        return water;
    }
};