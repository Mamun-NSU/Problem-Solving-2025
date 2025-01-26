// Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // Get the lengths of both strings
        int haystackLength = haystack.length();
        int needleLength = needle.length();

        // If the needle is empty, return 0
        if (needleLength == 0)
        {
            return 0;
        }

        // Traverse the haystack string
        for (int i = 0; i <= haystackLength - needleLength; ++i)
        {
            // Check if the substring matches the needle
            if (haystack.substr(i, needleLength) == needle)
            {
                return i;
            }
        }

        // If no match is found, return -1
        return -1;
    }
};
