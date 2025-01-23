// Link: https://leetcode.com/problems/ransom-note/description/

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        // Create a frequency count array for magazine
        vector<int> freq(26, 0);

        // Count each character in magazine
        for (char ch : magazine)
        {
            freq[ch - 'a']++;
        }

        // Check if ransomNote can be constructed
        for (char ch : ransomNote)
        {
            if (freq[ch - 'a'] == 0)
            {
                // If the required character is unavailable
                return false;
            }
            // Decrement the count of the used character
            freq[ch - 'a']--;
        }

        return true; // All characters are available in sufficient quantity
    }
};
