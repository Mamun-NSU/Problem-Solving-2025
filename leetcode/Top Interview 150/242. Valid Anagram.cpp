// Link: https://leetcode.com/problems/valid-anagram/description/

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        vector<int> count(26, 0); // Since input contains only lowercase letters

        for (char c : s)
            count[c - 'a']++;
        for (char c : t)
        {
            count[c - 'a']--;
            if (count[c - 'a'] < 0)
                return false; // Early exit
        }

        return true;
    }
};
