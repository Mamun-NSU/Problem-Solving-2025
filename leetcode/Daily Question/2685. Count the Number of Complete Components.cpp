// Link: https://leetcode.com/problems/count-the-number-of-complete-components/description/

class Solution
{
public:
    int countCompleteComponents(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);

        // Build adjacency list
        for (auto &edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int completeCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                unordered_set<int> nodes;
                int edgeCount = 0;

                // Perform DFS to find connected component
                dfs(i, adj, visited, nodes, edgeCount);

                int nodeCount = nodes.size();
                if (edgeCount / 2 == (nodeCount * (nodeCount - 1)) / 2)
                {
                    completeCount++;
                }
            }
        }

        return completeCount;
    }

private:
    void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, unordered_set<int> &nodes, int &edgeCount)
    {
        visited[node] = true;
        nodes.insert(node);

        for (int neighbor : adj[node])
        {
            edgeCount++;
            if (!visited[neighbor])
            {
                dfs(neighbor, adj, visited, nodes, edgeCount);
            }
        }
    }
};
