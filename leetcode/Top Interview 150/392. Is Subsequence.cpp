// Link: https://leetcode.com/problems/is-subsequence/description/

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0; // Pointers for strings s and t

        // Traverse both strings
        while (i < s.length() && j < t.length())
        {
            // If characters match, move pointer in s
            if (s[i] == t[j])
            {
                i++;
            }
            // Always move pointer in t
            j++;
        }

        // If i has reached the end of s, all characters were found in sequence
        return i == s.length();
    }
};