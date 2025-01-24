// Link: https://leetcode.com/problems/integer-to-roman/description/

class Solution
{
public:
    string intToRoman(int num)
    {
        // Define Roman numeral symbols and their values
        const vector<pair<int, string>> romanSymbols = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

        string result = ""; // Initialize the result string

        // Iterate through the symbols and values
        for (const auto &[value, symbol] : romanSymbols)
        {
            while (num >= value)
            {
                result += symbol; // Append the Roman numeral
                num -= value;     // Subtract the corresponding value
            }
        }

        return result; // Return the final Roman numeral
    }
};
