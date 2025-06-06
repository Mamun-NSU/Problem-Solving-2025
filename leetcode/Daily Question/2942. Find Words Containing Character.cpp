// Link: https://leetcode.com/problems/find-words-containing-character/

class Solution
{
public:
    std::vector<int> findWordsContaining(std::vector<std::string> &words, char x)
    {
        std::vector<int> result;
        for (int i = 0; i < words.size(); ++i)
        {
            if (words[i].find(x) != std::string::npos)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};