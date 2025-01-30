// Link: https://leetcode.com/problems/divide-nodes-into-the-maximum-number-of-groups/description/

#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int magnificentSets(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj(n + 1);
        for (auto &edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> color(n + 1, 0); // 0: unvisited, 1: color 1, -1: color 2
        unordered_map<int, vector<int>> components;

        // BFS to check bipartiteness and group connected components
        for (int i = 1; i <= n; ++i)
        {
            if (color[i] != 0)
                continue; // Already visited in some component

            queue<int> q;
            q.push(i);
            color[i] = 1;
            components[i] = {i};

            while (!q.empty())
            {
                int node = q.front();
                q.pop();

                for (int neighbor : adj[node])
                {
                    if (color[neighbor] == 0)
                    {
                        color[neighbor] = -color[node];
                        q.push(neighbor);
                        components[i].push_back(neighbor);
                    }
                    else if (color[neighbor] == color[node])
                    {
                        return -1; // Not bipartite
                    }
                }
            }
        }

        // Compute max BFS depth for each component
        int result = 0;

        for (auto &[root, nodes] : components)
        {
            int maxDepth = 0;

            for (int start : nodes)
            {
                queue<int> q;
                unordered_map<int, int> dist;

                q.push(start);
                dist[start] = 1;

                int depth = 0;

                while (!q.empty())
                {
                    int sz = q.size();
                    depth++;

                    for (int j = 0; j < sz; ++j)
                    {
                        int node = q.front();
                        q.pop();

                        for (int neighbor : adj[node])
                        {
                            if (dist.count(neighbor) == 0)
                            {
                                dist[neighbor] = dist[node] + 1;
                                q.push(neighbor);
                            }
                        }
                    }
                }

                maxDepth = max(maxDepth, depth);
            }

            result += maxDepth;
        }

        return result;
    }
};
