// Link: https://leetcode.com/problems/clear-digits/description/

class Solution
{
public:
    string clearDigits(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (isdigit(c))
            {
                // Remove the closest non-digit (if any exists)
                if (!st.empty() && isalpha(st.top()))
                {
                    st.pop();
                }
            }
            else
            {
                st.push(c);
            }
        }

        // Construct the final string from the stack
        string result;
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
