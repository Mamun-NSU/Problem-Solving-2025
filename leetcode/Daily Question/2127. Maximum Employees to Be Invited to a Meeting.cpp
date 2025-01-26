// Link: https://leetcode.com/problems/maximum-employees-to-be-invited-to-a-meeting/description/

#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumInvitations(vector<int> &favorite)
    {
        int n = favorite.size();
        vector<int> inDegree(n, 0);
        vector<int> chainLength(n, 0);

        // Calculate in-degrees for each employee
        for (int i = 0; i < n; ++i)
        {
            inDegree[favorite[i]]++;
        }

        queue<int> q;

        // Identify nodes with in-degree 0 (start of chains)
        for (int i = 0; i < n; ++i)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        // Remove nodes in chains
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            int next = favorite[curr];
            chainLength[next] = max(chainLength[next], chainLength[curr] + 1);
            if (--inDegree[next] == 0)
            {
                q.push(next);
            }
        }

        // Handle cycles and chains ending at cycles
        vector<bool> visited(n, false);
        int maxCycleSize = 0;
        int chainSum = 0;

        for (int i = 0; i < n; ++i)
        {
            if (!visited[i])
            {
                int curr = i;
                vector<int> path;

                // Traverse to detect cycles or revisit chains
                while (!visited[curr])
                {
                    visited[curr] = true;
                    path.push_back(curr);
                    curr = favorite[curr];
                }

                // Detect the cycle and calculate its size
                if (find(path.begin(), path.end(), curr) != path.end())
                {
                    int cycleStart = find(path.begin(), path.end(), curr) - path.begin();
                    int cycleSize = path.size() - cycleStart;

                    if (cycleSize == 2)
                    {
                        // Special case: cycle of size 2 allows chains on both sides
                        int left = path[cycleStart];
                        int right = favorite[left];
                        chainSum += chainLength[left] + chainLength[right] + 2;
                    }
                    else
                    {
                        maxCycleSize = max(maxCycleSize, cycleSize);
                    }
                }
            }
        }

        // Return the maximum invitations possible
        return max(maxCycleSize, chainSum);
    }
};
