// Link:  https://leetcode.com/problems/palindrome-number/description/

class Solution
{
public:
    bool isPalindrome(int x)
    {

        if (x < 0)
            return false;

        std::string s = std::to_string(x);

        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};