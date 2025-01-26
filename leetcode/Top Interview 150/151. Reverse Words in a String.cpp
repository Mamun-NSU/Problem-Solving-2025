// Link: https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution
{
public:
    string reverseWords(string s)
    {
        // Remove leading and trailing spaces
        int start = 0, end = s.length() - 1;
        while (start <= end && s[start] == ' ')
            start++;
        while (end >= start && s[end] == ' ')
            end--;

        // Split words into a vector
        vector<string> words;
        string word;
        for (int i = start; i <= end; i++)
        {
            if (s[i] != ' ')
            {
                word += s[i];
            }
            else if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
        if (!word.empty())
            words.push_back(word);

        // Reverse the order of words
        reverse(words.begin(), words.end());

        // Join words with a single space
        string result;
        for (int i = 0; i < words.size(); i++)
        {
            result += words[i];
            if (i < words.size() - 1)
                result += " ";
        }

        return result;
    }
};
