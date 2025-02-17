// Link: https://leetcode.com/problems/letter-tile-possibilities/description/

class Solution
{
public:
    int numTilePossibilities(string tiles)
    {
        unordered_map<char, int> freq;
        for (char ch : tiles)
        {
            freq[ch]++;
        }
        return backtrack(freq);
    }

private:
    int backtrack(unordered_map<char, int> &freq)
    {
        int count = 0;
        for (auto &[ch, cnt] : freq)
        {
            if (cnt > 0)
            {
                count++;
                freq[ch]--;
                count += backtrack(freq);
                freq[ch]++; // Backtrack
            }
        }
        return count;
    }
};
