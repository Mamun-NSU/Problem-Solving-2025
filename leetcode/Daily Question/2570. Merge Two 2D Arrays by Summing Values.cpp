// Link: https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        unordered_map<int, int> id_map;

        // Add elements from nums1
        for (auto &pair : nums1)
        {
            id_map[pair[0]] += pair[1];
        }

        // Add elements from nums2
        for (auto &pair : nums2)
        {
            id_map[pair[0]] += pair[1];
        }

        // Convert the map to a sorted 2D vector
        vector<vector<int>> result;
        for (auto &entry : id_map)
        {
            result.push_back({entry.first, entry.second});
        }

        // Sorting based on the ID
        sort(result.begin(), result.end());

        return result;
    }
};
