// Link: https://leetcode.com/problems/course-schedule-iv/description/

class Solution
{
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>> &prerequisites, vector<vector<int>> &queries)
    {
        // Initialize a 2D vector to keep track of reachability
        vector<vector<bool>> isReachable(numCourses, vector<bool>(numCourses, false));

        // Mark direct prerequisites as reachable
        for (const auto &pre : prerequisites)
        {
            isReachable[pre[0]][pre[1]] = true;
        }

        // Use Floyd-Warshall algorithm to compute transitive closure
        for (int k = 0; k < numCourses; ++k)
        {
            for (int i = 0; i < numCourses; ++i)
            {
                for (int j = 0; j < numCourses; ++j)
                {
                    if (isReachable[i][k] && isReachable[k][j])
                    {
                        isReachable[i][j] = true;
                    }
                }
            }
        }

        // Answer each query
        vector<bool> answer;
        for (const auto &query : queries)
        {
            answer.push_back(isReachable[query[0]][query[1]]);
        }

        return answer;
    }
};