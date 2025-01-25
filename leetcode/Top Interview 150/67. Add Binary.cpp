// Link: https://leetcode.com/problems/add-binary/description/

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result = "";
        int carry = 0; // To store the carry
        int i = a.size() - 1, j = b.size() - 1;

        // Process both strings from the end to the beginning
        while (i >= 0 || j >= 0 || carry > 0)
        {
            int sum = carry;
            if (i >= 0)
            {
                sum += a[i] - '0'; // Convert char to int
                i--;
            }
            if (j >= 0)
            {
                sum += b[j] - '0'; // Convert char to int
                j--;
            }
            carry = sum / 2;           // Update the carry
            result += (sum % 2) + '0'; // Append the current bit to the result
        }

        // Since the result is built in reverse order, reverse it
        reverse(result.begin(), result.end());
        return result;
    }
};
