// Link: https://leetcode.com/problems/construct-smallest-number-from-di-string/description/

class Solution
{
public:
    string smallestNumber(string pattern)
    {
        string result;
        stack<int> stk;

        for (int i = 0; i <= pattern.size(); i++)
        {
            stk.push(i + 1); // Push the next available number

            // If end of pattern is reached or next is 'I', pop stack
            if (i == pattern.size() || pattern[i] == 'I')
            {
                while (!stk.empty())
                {
                    result += to_string(stk.top());
                    stk.pop();
                }
            }
        }
        return result;
    }
};
