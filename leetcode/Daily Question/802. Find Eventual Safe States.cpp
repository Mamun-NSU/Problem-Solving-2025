// Link: https://leetcode.com/problems/find-eventual-safe-states/description/

class Solution
{
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<vector<int>> reverseGraph(n);
        vector<int> inDegree(n, 0);
        queue<int> q;
        vector<int> safeNodes;

        // Step 1: Reverse the graph and count in-degrees
        for (int i = 0; i < n; ++i)
        {
            for (int neighbor : graph[i])
            {
                reverseGraph[neighbor].push_back(i);
                inDegree[i]++;
            }
        }

        // Step 2: Add terminal nodes to the queue
        for (int i = 0; i < n; ++i)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        // Step 3: Perform BFS
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);
            for (int neighbor : reverseGraph[node])
            {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0)
                {
                    q.push(neighbor);
                }
            }
        }

        // Step 4: Sort the safe nodes
        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;
    }
};
