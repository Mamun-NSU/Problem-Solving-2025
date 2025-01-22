// Link: https://leetcode.com/problems/valid-parentheses/description/

class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> bracketStack;

        for (char c : s)
        {

            if (c == '(' || c == '[' || c == '{')
            {
                bracketStack.push(c);
            }

            else
            {

                if (bracketStack.empty())
                    return false;

                char top = bracketStack.top();
                bracketStack.pop();

                if ((c == ')' && top != '(') || (c == ']' && top != '[') ||
                    (c == '}' && top != '{'))
                {
                    return false;
                }
            }
        }

        return bracketStack.empty();
    }
};
