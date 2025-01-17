// Link: https://leetcode.com/problems/length-of-last-word/description/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;
        bool isWord = false;

        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] != ' ')
            {

                length++;
                isWord = true;
            }
            else if (isWord)
            {

                break;
            }
        }
        return length;
    }
};
