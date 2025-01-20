Link : https : // leetcode.com/problems/roman-to-integer/description/

               class Solution
{
public:
    int romanToInt(string s)
    {

        unordered_map<char, int> romanMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int n = s.length();
        int result = 0;
        int prevValue = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            int currentValue = romanMap[s[i]];

            if (currentValue < prevValue)
            {
                result -= currentValue;
            }
            else
            {

                result += currentValue;
            }

            prevValue = currentValue;
        }

        return result;
    }
};
