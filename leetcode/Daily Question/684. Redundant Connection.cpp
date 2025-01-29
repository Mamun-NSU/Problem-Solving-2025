// Link : https://leetcode.com/problems/redundant-connection/

class Solution
{
public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        int n = edges.size();
        vector<int> parent(n + 1), rank(n + 1, 0);

        // Initialize each node's parent to itself
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
        }

        // Find function with path compression
        function<int(int)> find = [&](int x)
        {
            return parent[x] == x ? x : (parent[x] = find(parent[x]));
        };

        // Union function with rank optimization
        auto unite = [&](int u, int v)
        {
            int rootU = find(u), rootV = find(v);
            if (rootU == rootV)
                return false; // Cycle detected
            if (rank[rootU] > rank[rootV])
            {
                parent[rootV] = rootU;
            }
            else if (rank[rootU] < rank[rootV])
            {
                parent[rootU] = rootV;
            }
            else
            {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
            return true;
        };

        // Process each edge
        for (auto &edge : edges)
        {
            if (!unite(edge[0], edge[1]))
            {
                return edge; // The redundant edge
            }
        }

        return {};
    }
};
