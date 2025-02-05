// Link: https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/

class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1 == s2)
            return true; // Already equal

        vector<int> diffIndices;

        for (int i = 0; i < s1.length(); ++i)
        {
            if (s1[i] != s2[i])
            {
                diffIndices.push_back(i);
            }
        }

        if (diffIndices.size() != 2)
            return false; // More than one swap needed

        int i = diffIndices[0], j = diffIndices[1];
        return (s1[i] == s2[j] && s1[j] == s2[i]);
    }
};
