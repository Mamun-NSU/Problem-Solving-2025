// Link: https://leetcode.com/problems/find-the-punishment-number-of-an-integer/description/

class Solution
{
public:
    bool isValidPartition(string s, int target, int sum = 0, int index = 0)
    {
        if (index == s.size())
            return sum == target;

        int num = 0;
        for (int i = index; i < s.size(); i++)
        {
            num = num * 10 + (s[i] - '0');
            if (isValidPartition(s, target, sum + num, i + 1))
                return true;
        }
        return false;
    }

    int punishmentNumber(int n)
    {
        int total = 0;
        for (int i = 1; i <= n; i++)
        {
            int square = i * i;
            if (isValidPartition(to_string(square), i))
            {
                total += square;
            }
        }
        return total;
    }
};
