// Link: https://leetcode.com/problems/word-pattern/description/

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        vector<string> words;
        stringstream ss(s);
        string word;

        // Split the string s into words
        while (ss >> word)
        {
            words.push_back(word);
        }

        // Check if pattern length matches number of words
        if (pattern.length() != words.size())
            return false;

        for (int i = 0; i < pattern.size(); i++)
        {
            char ch = pattern[i];
            string w = words[i];

            // If char-word mapping exists, check consistency
            if (charToWord.count(ch) && charToWord[ch] != w)
                return false;
            if (wordToChar.count(w) && wordToChar[w] != ch)
                return false;

            // Otherwise, establish new mappings
            charToWord[ch] = w;
            wordToChar[w] = ch;
        }

        return true;
    }
};