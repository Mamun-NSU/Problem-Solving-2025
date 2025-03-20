// Link: https://leetcode.com/problems/minimum-cost-walk-in-weighted-graph/description/

#include <bits/stdc++.h>
using namespace std;

class DSU
{
public:
    vector<int> parent, rank;

    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // Path compression
        return parent[x];
    }

    void unite(int x, int y)
    {
        int rootX = find(x), rootY = find(y);
        if (rootX != rootY)
        {
            if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else
            {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

class Solution
{
public:
    vector<int> minimumCost(int n, vector<vector<int>> &edges, vector<vector<int>> &query)
    {
        DSU dsu(n);
        unordered_map<int, int> minAndCost;

        // Step 1: Union-Find to determine connected components
        for (auto &edge : edges)
        {
            int u = edge[0], v = edge[1], w = edge[2];
            dsu.unite(u, v);
        }

        // Step 2: Find the minimum AND cost in each connected component
        for (auto &edge : edges)
        {
            int u = edge[0], v = edge[1], w = edge[2];
            int root = dsu.find(u);
            if (minAndCost.find(root) == minAndCost.end())
                minAndCost[root] = w;
            else
                minAndCost[root] &= w;
        }

        // Step 3: Answer the queries
        vector<int> answer;
        for (auto &q : query)
        {
            int s = q[0], t = q[1];
            if (dsu.find(s) != dsu.find(t))
                answer.push_back(-1);
            else
                answer.push_back(minAndCost[dsu.find(s)]);
        }

        return answer;
    }
};
